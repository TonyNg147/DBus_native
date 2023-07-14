#!/bin/bash
rm -rf build
valid="true"
if [ "$1" == "cmake" ]; then
    cmake -B build
elif [ "$1" == "qmake" ]; then
    QT=""
    if [ -d ~/Qt/6.2.7 ]; then
        QT=~/Qt/6.2.7
    fi
    if [ -n "$QT" ]; then
        mkdir -p build
        pushd build || exit
        "$QT/gcc_64/bin/qmake6" "$PWD/.."
        popd || exit
    else
        valid=""
    fi
else
    valid=""
fi
if [ -n "${valid}" ]; then
    cd build || exit
    make -j8
else
    echo "Cannot generate Makefile"
fi