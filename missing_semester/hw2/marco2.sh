#!/bin/bash
marco()
{
    export MARCO=$(pwd)
    echo "Save pwd $MARCO"
}

polo()
{
    cd "$MARCO"
}
