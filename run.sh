#!/bin/bash
QT=""
if [ -d ~/Qt/6.2.7/ ]; then        
    QT=~/Qt/6.2.7
    echo "Find the appropriate Qt dir"
else
    echo "Assign another Qt dir"
fi
echo $QT
#export library to the loader to exec the program
if [  -n "$QT" ]; then
    export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$PWD/build/Delivery/libraries
    export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$QT/gcc_64/bin
    cd build || exit
    exec  Delivery/Adapter & Delivery/Interfaces
else
    echo "equal zero"
fi


