#!/bin/bash

case $1 in
	"hello")
		echo "hello how are you ?"
		;;
	"")
		echo "you must input parameters,ex> $0 someword"
		;;
	*)
		echo "usage $0 {hello}"
		;;
esac
