#!/bin/bash
gcc -Wall -Werror -Wextra -std=gnu89 -pedantic -c *.c
ar -rc liball.a *.o
ranlib liball.a
