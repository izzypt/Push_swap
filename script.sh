#!/bin/bash
# Basic while loop
counter=1
total=0
average=0
while [ $counter -le 100 ]
do
    ARG=$(shuf -i 1-600 -n 100)
    ARG2=$(./push_swap $ARG)
    echo $ARG2
    ((counter++))
done
echo "All done"


