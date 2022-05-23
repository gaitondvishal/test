#!/bin/bash

num1=$1
num2=$2
if [ $num1 -gt $num2 ]; then
        echo "$1 is the biggest"
else
        echo "$2 is the biggest"
fi
