#!/bin/bash
# Basic while loop
counter=1
while [ $counter -le 100 ]
do
ARG=$(shuf -i 1-600 -n 100)
ARG2=$(./push_swap $ARG | wc -l)
echo $ARG2
((counter++))
done
echo All done
