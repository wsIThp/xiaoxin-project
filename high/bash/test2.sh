#!/bin/bash
#program:
#show "hello" from $1....
#History:
#2005/08/28 	Mcgdary		second
PATH=/bin:/sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin:~/bin
export PATH

if [[ "$1" == "hello" ]]; then
	echo "hello ,how are you? "
elif [[ "$1" == "" ]]; then
	echo "You MUst input parameters, ex> $0 someword"
else 
	echo "The only parameter is 'hello'"
fi
