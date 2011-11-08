#!/bin/bash

#Program:
#	This prohram will show the user choice

#History
#2011/11/06		Mcgrday		first test

export PATH

read -p "please input the (Y/N):" yn

if [[ "$yn" == "y" ]] || [ "$yn" == "N" ]; then
	echo "OK, continue"
	exit 0
fi
if [[ "$yn" == "Y" ]] || [ "$yn" == "N" ]; then
	echo "Og,interrput!"
	exit 0
fi
echo "I don not konw what is your choice" && exit 0

