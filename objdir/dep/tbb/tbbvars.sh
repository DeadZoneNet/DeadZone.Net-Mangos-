#!/bin/bash
tbb_root="/root/Sources/mangos/dep/tbb" #
tbb_bin="/root/Sources/mangos/objdir/dep/tbb" #
if [ -z "$CPATH" ]; then #
    export CPATH="${tbb_root}/include" #
else #
    export CPATH="${tbb_root}/include:$CPATH" #
fi #
if [ -z "$LIBRARY_PATH" ]; then #
    export LIBRARY_PATH="${tbb_bin}" #
else #
    export LIBRARY_PATH="${tbb_bin}:$LIBRARY_PATH" #
fi #
if [ -z "$LD_LIBRARY_PATH" ]; then #
    export LD_LIBRARY_PATH="${tbb_bin}" #
else #
    export LD_LIBRARY_PATH="${tbb_bin}:$LD_LIBRARY_PATH" #
fi #
 #
