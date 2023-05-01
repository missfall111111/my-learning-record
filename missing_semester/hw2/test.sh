#!/usr/bin/env bash

source example.sh
if [[$? -eq 1]]
    echo 2> error.txt

fi
