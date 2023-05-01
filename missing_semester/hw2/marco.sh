#!/bin/sh
#marco ()
#{
 #   echo "$(pwd)" > tee polo()
#}

#polo()
#{
 #   cd $1
#}  that is your stupid answer, and the standard is followed
marco ()
{
    echo "$(pwd)">$HOME/my-learning-record/missing_semester/hw2/marco_history.log
    echo "Save pwd $(pwd)"
}

polo()
{
    cd "$(cat "$HOME/my-learning-record/missing_semester/hw2/marco_history.log")"
}

