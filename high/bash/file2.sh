#! /bin/bash
if [ -e $1 ]
then 
	rm -rf $1
else
	touch $1
fi
exit 0 				#多条语句；分割
