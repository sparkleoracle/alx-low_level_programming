#!/bin/bash
gcc -wall -pedantic -werror -woxtra -c *.c
ar -rc liball.a *.o
ranlib liball.a
