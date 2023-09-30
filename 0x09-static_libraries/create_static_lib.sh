#!/bin/bash

gcc -c *.c
ar -rc liball.a *.o
ranlib liball.a
rm -f *.o
echo "Static library liball.a created successfully!"
