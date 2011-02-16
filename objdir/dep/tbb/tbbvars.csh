#!/bin/csh
setenv tbb_root "/root/Sources/mangos/dep/tbb" #
setenv tbb_bin "/root/Sources/mangos/objdir/dep/tbb" #
if (! $?CPATH) then #
    setenv CPATH "${tbb_root}/include" #
else #
    setenv CPATH "${tbb_root}/include:$CPATH" #
endif #
if (! $?LIBRARY_PATH) then #
    setenv LIBRARY_PATH "${tbb_bin}" #
else #
    setenv LIBRARY_PATH "${tbb_bin}:$LIBRARY_PATH" #
endif #
if (! $?LD_LIBRARY_PATH) then #
    setenv LD_LIBRARY_PATH "${tbb_bin}" #
else #
    setenv LD_LIBRARY_PATH "${tbb_bin}:$LD_LIBRARY_PATH" #
endif #
 #
