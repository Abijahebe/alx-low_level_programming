#!/bin/bash

# Compile all .c files into object files
gcc -c -fPIC *.c

# Create the shared library
gcc -shared -o liball.so *.o

# Clean up object files
rm *.o
