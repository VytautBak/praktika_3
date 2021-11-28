#!/bin/bash

if [ "$EUID" -ne 0 ]
	then echo "Please run as root."
	exit
else
	green=`tput setaf 2`
	echo "SCRIPT: Compiling..."
	make > /dev/null
	echo "SCRIPT: Compiled!"
	echo "SCRIPT: Clearing log file..."
	rm /var/log/praktika_log.log -f
	echo "SCRIPT: Cleared log file!"
	echo "SCRIPT: Running writer_1..."
	src/writer_1/writer_1
	echo "SCRIPT: Running writer_2..."
	src/writer_2/writer_2
	echo "SCRIPT: Printing output of first program..."
	src/reader/logreader -P fibonacci_skaiciuokle
	echo "SCRIPT: Printing output of second program..."
	echo "SCRIPT: Printing whole file..."
	src/reader/logreader
	
fi
