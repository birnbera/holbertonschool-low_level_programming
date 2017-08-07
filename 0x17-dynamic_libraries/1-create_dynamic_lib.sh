#!/bin/bash
gcc-4.8 -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc-4.8 -Wall -Wextra -Werror -pedantic -shared -o liball.so *.o
