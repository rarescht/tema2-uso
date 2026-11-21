#!/bin/bash

if [ "$1" == "c" ]; then
        gcc zar.c -o zar && ./zar
elif [ "$1" == "py" ]; then
        python3 zar.py
fi
