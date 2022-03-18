#!/bin/bash

if [ "$1" -gt 2 ]; then
    str=""
    for(( i=$1; i>0; i-- )); do
        str="${str}*"
    done

    echo "$str"
    str=""

    for(( i=$1-1; i>0; i-- )); do
        str="${str}*"
        for((j=$i-1; j>1; j--)); do
            str="${str} "
        done
        str="${str}*"

        if [ "$i" -gt 1 ]; then
            echo "$str"
        fi
        str=""
    done

    echo "*"
else
    echo "Argument seems absent or to small for this problem (try something > 2)!"
fi
