#!/bin/bash
wget -P /tmp https://github.com/Kiruti01/alx-low_level_programming/raw/main/0x18-dynamic_libraries/randomnum.so
export LD_PRELOAD=/tmp/randomnum.so

./gm 9 8 10 24 75 9
