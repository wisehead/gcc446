#############################################################
#   File Name: build.sh
#     Autohor: Hui Chen (c) 2020
#        Mail: chenhui13@baidu.com
# Create Time: 2020/03/15-16:39:18
#############################################################
#!/bin/sh 
./configure --prefix=/home/chenhui2/bin/gcc446 --with-gmp=/home/chenhui2/bin/gmp-4.3.2 \
    --with-mpfr=/home/chenhui2/bin/mpfr-2.4.2 --with-mpc=/home/chenhui2/bin/mpc-0.8.1 --enable-language=c,c++

function log()
{
        local epath=$(pwd)
        local timestamp=$(date +%Y%m%d-%H:%M:%S)
        #echo "#######################################################################"
        echo "[$timestamp][$epath]$1"
}

function do_cmd()
{
        log "[exec] $*   please wait............"
        if [ $debug -eq 1 ];then
                $@
        else
                $@ >/dev/null 2>&1
        fi
        if [[ $? -ne 0 ]];then
                log "[fail] $@"
                exit 1
        else
                log "[succ] $@"
        fi
}

export CFLAGS='-fgnu89-inline -g -O2' 
export CXXFLAGS='-fgnu89-inline -g -O2'
# make -j8 >out 2>&1

