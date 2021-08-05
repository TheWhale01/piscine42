#!/bin/bash

echo "Begin"
read start

echo "End"
read end

for ((i = $start; i <= $end; i++))
do
	if [ $i -lt 10 ];
	then
		mkdir "ex0$i"
	else
		mkdir "ex$i"
	fi
done
