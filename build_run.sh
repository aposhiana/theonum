#!/bin/bash
mkdir -p build
cd build && rm -rf ./*
cmake ../src
make
./theonum_test
