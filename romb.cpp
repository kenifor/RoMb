#!/bin/bash

verh=1
for ((num=0;num<"$1";num++))
do
        for ((q=0;q<(($1-verh));q++))
        do
                echo -n " "
        done
                for ((w=0;w<$verh;w++))
                do
                        echo -n " ."
        done
        echo ""
        verh=$(($verh+1))
done
size=$1
niz=size-1
for ((num=0;num<=(($1-1));num++))
do
        for ((e=0;e<((size-niz));e++))
        do
                echo -n " "
        done
                for ((r=0;r<niz;r++))
                do
                        echo -n " ."
        done
        echo ""
        niz=$(($niz-1))
done
exit 0
