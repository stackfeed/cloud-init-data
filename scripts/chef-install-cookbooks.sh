#!/bin/sh
## Chef cookbooks installer.
#  Installs cookbooks given as list in a local system file or a remote file.
#
#  Required tools: curl or wget, git and berkshelf
#  Cookbook URL can contain @reference in the end
#

set -e

BERKS_EMPTY=<<EHD
source "https://supermarket.chef.io"
metadata
EHD

usage=`cat <<EHD
Usage: $0 [-d cookbooks path] [-f list file path or URL] [cookbook URL ...]

    Installs cookbooks list provided as list of URLs from a file. File can be local or remote.

    -d cookbooks path   - path where to install cookbooks, default: $PWD/cookbooks
    -f list path or URL - path or URL to get the list of cookbooks from

Examples:

    chef-install-cookbooks.sh -d ~/cookbooks http://github.com/my/chef-cookbook@ref
EHD`


# Parse options
while getopts ":d:f:" opt; do
    case $opt in
        f)
            list_url=$OPTARG
            ;;
        d)
            cookbooks_path=$OPTARG
            ;;
        \?)
            error=yes
            ;;
    esac
done
shift $((OPTIND-1))


## Shallow git fetch from repository uri format supported gituri@ref
#
git_fetch() {
    path=$1
    repo="${2%@*}"; ref=$(echo $2 | sed -r 's/[^@]*@?//')

    cd $path || exit $?

    # fetch
    git init &&
    git remote add origin $repo &&
    git fetch --depth 1 origin ${ref:-master} &&
    git reset --hard FETCH_HEAD || { cd $pdir; exit 1; }

    cd $pdir
}


## Install cookbook with its dependencies from remote URLs
#
get_cookbooks() {
    pdir=$(pwd)

    for url in $@; do
        tempdir=$(mktemp -d); cd "$tempdir"
        echo "\n==> Installing cookbook from $url into \`$cookbooks_path'"

        git_fetch $tempdir $url || exit 1
        cd $tempdir

        [ -f Berksfile ] || echo "$BERKS_EMPTY" > Berksfile
        HOME=/tmp /opt/chef/embedded/bin/berks vendor $cookbooks_path
        rs=$?

        cd $pdir && rm -rf $tempdir
        [ $rs -ne 0 ] && exit $rs
    done
}


## ===== Main
#
cookbooks_path="${cookbooks_path:-$(pwd)/cookbooks}"
cookbooks_path=$(readlink -f $cookbooks_path)


# list URL given
if [ -n "$list_url" ]; then

    tempfile=$(mktemp -u)
    if (echo "$list_url" | grep -q '\(https\?\|ftp\)://'); then

        # it's a remote URL
        curl -V 1>/dev/null 2>&1 && fetcher=curl && opts=-sSL
        [ -z "$fetcher" ] && wget -V 1>/dev/null 2>&1 && fetcher=wget && opts=-qO-
        [ -z "$fetcher" ] && { echo "Neither curl nor wget found!"; exit 1; }

        $fetcher $opts "$list_url" > $tempfile
    elif [ -f "$list_url" ]; then

        # it's a local file
        cat "$list_url" > $tempfile
    elif [ $# -lt 1 ]; then
        echo "==> You must provide path to a local or a remote file!"
        exit 1
    fi

    # install from a list
    source_urls=$(cat $tempfile); rm $tempfile
    get_cookbooks $source_urls

elif [ $# -lt 1 ]; then
    echo "$usage" && exit 1
fi

# from the arguments list
for url in $@; do
    get_cookbooks $url
done
