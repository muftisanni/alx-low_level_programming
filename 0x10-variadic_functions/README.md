# C - Variadic functions

* Project done during Full Stack Software Engineering studies at **ALX Africa SE.** It aims to learn about variadic functions in **C language.**

## Technologies
* C files are compiled using `gcc 4.8.4`
* C files are written according to the `C90 standard.`
* Tested on Ubuntu `20.04 LTS.`

## variadic_functions.h
- [variadic_functions.h](./variadic_functions.h): Header file containing prototypes for all functions written in the project.

## Files 📃
> All of the following files are programs written in C:

**Filename** | **Description** | **Prototype**
-------------|-----------------|--------------
[0-sum_them_all.c](./0-sum_them_all.c) | A function that returns the sum of all its parameters. | `int sum_them_all(const unsigned int n, ...)`
[1-print_numbers.c](./1-print_numbers.c) | A function that prints numbers, followed by a new line. | `void print_numbers(const char *separator, const unsigned int n, ...)`
[2-print_strings.c](./2-print_strings.c) | A function that prints strings, followed by a new line.` | `void print_strings(const char *separator, const unsigned int n, ...)`
[3-print_all.c](./3-print_all.c) | A function that prints anything. | `void print_all(const char * const format, ...)`
[README.md](./README.md) | A README.md File | 

## Tasks 📃

* **Beauty is variable, ugliness is constant**

    * [0-sum_them_all.c](./0-sum_them_all.c): C function that returns the sum of all its paramters.
        - If the parameter `n == 0`, the function returns 0.


* **To be is to be the value of a variable**

    * [1-print_numbers.c](./1-print_numbers.c): C function that prints numbers, followed by a new line.
        - The paramter `separator` is the string to be printed between numbers.
        - The paramter `n` is the number of integers passed to the function.
        - If `separator` is `NULL`, it is not printed.


* **One woman's constant is another woman's variable**

    * [2-print_strings.c](./2-print_strings.c): C function that prints strings, followed by a new line.
        - The parameter `separator` is the string to be printed between the strings.
        - The parameter `n` is the number of strings passed to the function.
        - If `separator` is `NULL`, it is not printed.
        - If one of the strings is `NULL`, the function prints `(nil)` instead.


* **To be is a to be the value of a variable**

    * [3-print_all.c](./3-print_all.c): C function that prints anything.
        - Usage: `print_all(", ", 2, "Jay", "Django");`
        - he paramter `format` is a list of types of arguments passed to the function (`c:char, i:int, f:float, s:char *` (if the string is `NULL`, `(nil)` is printed instead))
        - Any other character is ignored.
        - new line is printed at the end of the function.