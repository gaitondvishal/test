#!/bin/bash

 echo "enter the string"
read string
n=`echo $string | wc -c`
 
while [ $n -gt 0 ]
do
   echo $string | cut -c$n >> temp
   n=$(($n-1))
done
cat temp | tr -d '\n'
rm temp

