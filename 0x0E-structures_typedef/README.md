# Structures, typedef

## Private 📁

[private](./private): This directory contains all my main.c and exe files for this project.

## Table of Content

Filename | Description
---------|------------
[1-init_dog.c](./1-init_dog.c) | File is a function that initialize a variable of type struct dog
[2-print_dog.c](./2-print_dog.c) | File is a function that prints a struct dog.
[4-new_dog.c](./4-new_dog.c) | File is a function that creates a new dog.
[5-free_dog.c](./5-free_dog.c) | File is a function that frees dogs.
[README.md](./README.md) | A README.md File.
[dog.h](./dog.h) | File is a header file containing a new type Struct dog.

## Tasks 📃

* 0. Django

  * [dog.h](./dog.h): Header file that defines a new type `struct` dog with the following elements:

    * `char *name`
    * `float age`
    * `char *owner`

* **A dog is the only thing on earth that loves you more than you love yourself**

    * [1-init_dog.c](./1-init_dog.c): C function that initializes a variable of type _`struct dog`_.

* **A dog will teach you unconditional love. If you can have that in your life, things won't be too bad**

    * [2-print_dog.c:](./2-print_dog.c:): C function that prints a `struct dog`
        - If an element of `d` is `NULL`, the function prints `(nil)` instead of the element.
        - If `d` is `NULL`, the function prints nothing.

* **Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read**

    * [dog.h](./dog.h): Header file that defines a new type `dog_t` as a new name for the type `struct dog`

* **A door is what a dog is perpetually on the wrong side of**