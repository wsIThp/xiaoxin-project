#! /bin/bash
if [ -e file.c ]
then 
	rm -rf file.c
else
	touch file.c
fi
exit 0 				#多条语句；分割
