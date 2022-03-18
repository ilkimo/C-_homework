#!/bin/bash

for((i = 3; i < 200; i++)); do
    ./script.sh "$i"
    sleep 0.1
done
