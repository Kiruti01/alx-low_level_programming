#!/bin/bash
wget -P /tmp https://github.com/Kiruti01/alx-low_level_programming/raw/master/0x18-dynamic_libraries/randomnum.so
export LD_PRELOAD=/$PWD/randomnum.so
