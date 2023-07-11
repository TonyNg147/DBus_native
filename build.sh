#!/bin/bash
QT=""
if [ -d ~/Qt/6.2.7 ]; then
    QT=~/Qt/6.2.7
fi
if [ -n "$QT" ]; then
    mkdir -p build
    cd build || exit
    "$QT/gcc_64/bin/qmake6" "$PWD/.."
    make -j8
else
    echo "Cannot find Qt. Please specify the correct path"
    exit
fi