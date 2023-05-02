#!/usr/bin/env bash
echo " "> out.log
count=0
until [[ "$?" -ne 0 ]];
do
    count=$((count+1))
    ./buggy.sh &>> out.log
done

cat out.log 
echo "found error after $count runs"
