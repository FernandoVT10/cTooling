#!/bin/bash
mkdir -p build

files="./src/main.c ./src/cTooling.c"

gcc -Wall -Wextra -Werror -W -o ./build/main $files
