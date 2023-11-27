# C - Dynamic libraries

Project done during Full Stack Software Engineering studies at **ALX AFRICA SE School**. I learnt about dynamic library, also called shared library. I learnt how to create and use them.

## Technologies
- C files are compiled using `gcc 4.8.4`
- C files are written according to the `C90 standard`.
- ested on Ubuntu `20.04 LTS`.

## main.h
* [main.h](./main.h): Header file containing prototypes for all functions written in this project.

## Files 📃
_Filename_ | _Description_ 
-----------|---------------
[1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh) | Bash script that creates a dynamic library called liball.so from all the .c files that are in the current directory
[libdynamic.so](./libdynamic.so) | C dynamic library containing the function definitions
[libmask.so](./libmask.so) | C dynamic library to inject in a giga million program 
[100-operations.so](./100-operations.so) | C dynamic library that contains C functions that can be called from Python
[101-make_me_win.sh](./101-make_me_win.sh) | Bash script to inject the libmask.so library, using LD_PRELOAD, in the giga million program
