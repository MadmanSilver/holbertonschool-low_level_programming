#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o libbasic.so *.o
