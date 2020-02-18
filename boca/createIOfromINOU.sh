#!/bin/bash
# i=1; for arq in $(cat botas.sol); do echo $arq > botas$i; ((i++)); done 

i=0
while read line; do
    if echo -e "$line" | grep -E "^[0-9]$|^[0-9][0-9]$|^[0-9][0-9][0-9]$|^[0-9][0-9][0-9][0-9]|^[0-9][0-9][0-9][0-9][0-9]$"; then
        ((i++))
        echo "i: $i"
    fi
    echo -e "$line" >> botas$i
done < botas.sol
