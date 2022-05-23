#!/bin/bash

echo "Enter the name"
read name

if [ -f $name ]; then
	echo "The $name is a file"
elif [ -d $name ]; then 
	echo "The $name is a directory"
else
	echo "$name doesnot exist"
fi
