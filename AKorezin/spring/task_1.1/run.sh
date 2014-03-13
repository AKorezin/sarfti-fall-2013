#!/bin/sh
make part1

echo ./app*
./app*
make clean
make part2
if [ $? -eq 0 ]
	then
	echo ./app*
	./app*
fi
make clean
