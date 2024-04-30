#!/bin/bash

dir="build"

if [ -d "$dir" ]; then
  rm -rf $dir
fi

mkdir $dir
cd $dir
cmake ../
make -j32
cd ../
