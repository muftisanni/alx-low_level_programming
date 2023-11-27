# C - Doubly linked lists
Project done during Full Stack Software Engineering studies at __ALX AFRICA SE School__.

## Technologies
- C files are compiled using `gcc 4.8.4`
- C files are written according to the `C90 standard`.
- ested on Ubuntu `20.04 LTS`.

## lists.h
* [lists.h](./lists.h): Header file containing prototypes for all functions written in this project.

## Files 📃
* All of the following files are programs written in `C`


_Filename_ | _Description_ | _Prototype_
-----------|---------------|------------
[0-print_dlistint.c	](0-print_dlistint.c	) | a function that prints all the elements of a dlistint_t list. | `	size_t print_dlistint(const dlistint_t *h);`
[1-dlistint_len.c](1-dlistint_len.c) | a function that returns the number of elements in a linked dlistint_t list. | `size_t dlistint_len(const dlistint_t *h);`
[2-add_dnodeint.c](2-add_dnodeint.c) | a function that adds a new node at the beginning of a dlistint_t list. | `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
[3-add_dnodeint_end.c](3-add_dnodeint_end.c) | a function that adds a new node at the end of a dlistint_t list. | `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
[4-free_dlistint.c](4-free_dlistint.c) | a function that frees a dlistint_t list. | `void free_dlistint(dlistint_t *head);`
[5-get_dnodeint.c](5-get_dnodeint.c) | a function that returns the nth node of a dlistint_t linked list. | `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
[6-sum_dlistint.c](6-sum_dlistint.c) | a function that returns the sum of all the data (n) of a dlistint_t linked list. | `int sum_dlistint(dlistint_t *head);`
[7-insert_dnodeint.c](7-insert_dnodeint.c) | a function that inserts a new node at a given position. | `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
[8-delete_dnodeint.c](8-delete_dnodeint.c) | a function that deletes the node at index index of a dlistint_t linked list. | `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
[100-password](100-password) | password for crackme4. | 
[102-result](102-result) | Find the largest palindrome made from the product of two 3-digit numbers. | 
[103-keygen.c](103-keygen.c) | a keygen for crackme5. |

## Tasks 🛅

0. **Print list**

    - [0-print_dlistint.c](./0-print_dlistint.c): C function that prints all the elements of a doubly-linked `dlistint_t` list.
    - Returns the number of nodes in the list.


1. **List length**

    - [1-dlistint_len.c](./1-dlistint_len.c): C function that returns the number of nodes in a doubly-linked `dlistint_t` list.


2. **Add node**

    * [2-add_dnodeint.c](./2-add_dnodeint.c): C function that adds a new node at the beginning of a doubly-linked `dlistint_t` list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.


3. **Add node at the end**

    * [3-add_dnodeint_end.c](./3-add_dnodeint_end.c): C function that adds a new node at the end of a doubly-linked `dlistint_t` list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.


4. **Free list**

    * [4-free_dlistint.c](./4-free_dlistint.c): C function that frees a doubly-linked `dlistint_t` list.


5. **Get node at index**

    * [5-get_dnodeint.c](./5-get_dnodeint.c): C function that locates a given node of a doubly-linked `dlistint_t` list.
    * The parameter `index` is the index of the node to locate - indices start at 0.
    * If the node does not exist - returns `NULL`.
    * Otherwise - returns the address of the located node.


6. **Sum list**

    * [6-sum_dlistint.c](./6-sum_dlistint.c): C function that sums all the data (`n`) of a doubly-linked dlistint_t list.
    * If the list is empty - returns `0`.
    * Otherwise - returns the sum of all the data (`n`).


7. **Insert at index**

    * [7-insert_dnodeint.c](./7-insert_dnodeint.c): C function that inserts a new node at a given position.
    * The parameter `idx` is the index of the list where the new node should be added - indices start at `0`.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.
    * Requires compilation with functions defined in [2-add_dnodeint.c](./2-add_dnodeint.c) and [3-add_dnodeint_end.c](./3-add_dnodeint_end.c).


8. **Delete at index**

    * [8-delete_dnodeint.c](./8-delete_dnodeint.c): C function that deletes the node at index `index` of a doubly-linked `dlistint_t` list.
    * The paramter `index` is the index of the node to delete - indices start at `0`.
    * If the function fails - returns `-1`.
    * Otherwise - returns `1`.


9. **Crackme4**

    * [100-password](./100-password): Text file containing the password for the [crackme4](https://github.com/holbertonschool/0x16.c) executable.


10. **Palindromes**

    * [102-result](./102-result): Text file containing the largest palindrome made from a product of two three-digit numbers.


11. **Crackme5**

    * [103-keygen.c](./103-keygen.c): C function that generates passwords for the [crackme5](https://github.com/holbertonschool/0x16.c) executable.
    * Usage of the crackme: `./crackme5 username key`
    * Usage of the keygen: `./keygen5 username`
