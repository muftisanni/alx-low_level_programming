# C - More singly linked lists

Project done during Full Stack Software Engineering studies at **_ALX Africa SE_**. In this project, I continued in practicing, building and using singly linked lists in `C` while learning when and why to use `linked lists` versus `arrays`.

## Technologies
- `C` files are compiled using `gcc 4.8.4`
- `C` files are written according to the `C90 standard`.
- ested on Ubuntu `20.04 LTS`.


## tests 📁
- [tests](./tests): This directory contains all my `main.c` and exe files for this project.

## lists.h
- [lists.h](./lists.h): Header file containing prototypes for all functions written in the project.


## Files 📃
* All of the following files are programs written in `C`:


_Filename_ | _Description_ | _Prototype_
-----------|---------------|------------
[0-print_listint.c](./0-print_listint.c) | A function that prints all the elements of a `listint_t` list. | `size_t print_listint(const listint_t *h)`
[1-listint_len.c](./1-listint_len.c) | A function that returns the number of elements in a linked `listint_t` list. | `size_t listint_len(const listint_t *h)`
[2-add_nodeint.c](./2-add_nodeint.c) | A function that adds a new node at the beginning of a `listint_t` list. | `listint_t *add_nodeint(listint_t **head, const int n)`
[3-add_nodeint_end.c](./3-add_nodeint_end.c) | A function that adds a new node at the end of a `listint_t` list. | `listint_t *add_nodeint_end(listint_t **head, const int n)`
[4-free_listint.c](./4-free_listint.c) | A function that frees a `listint_t` linked list. | `void free_listint(listint_t *head)`
[5-free_listint2.c](./5-free_listint2.c) | A function that frees a `listint_t` linked list | `void free_listint2(listint_t **head)`
[6-pop_listint.c](./6-pop_listint.c) | A function that deletes the head node of a `listint_t` linked list. | `int pop_listint(listint_t **head)`
[7-get_nodeint.c](./7-get_nodeint.c) | A function that locates a given node of a `listint_t` linked list. | `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)`
[8-sum_listint.c](./8-sum_listint.c) | A function that returns the sum of all the data (`n`) of a `listint_t` linked list. | `int sum_listint(listint_t *head)`
[9-insert_nodeint.c](./9-insert_nodeint.c) | A function that inserts a new node to a `listint_t` linked list at a given position. | `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)`
[10-delete_nodeint.c](./10-delete_nodeint.c) | A function that deletes the node at a given index of a `listint_t` linked list. | `int delete_nodeint_at_index(listint_t **head, unsigned int index)`
[100-reverse_listint.c](./100-reverse_listint.c) | A function that reverses a `listint_t` linked list using a maximum of one loop and two variables. | `listint_t *reverse_listint(listint_t **head)`
[101-print_listint_safe.c](./101-print_listint_safe.c) | A function that prints a `listint_t` linked list safely (ie. can free lists containing loops). | `size_t print_listint_safe(const listint_t *head)`
[102-free_listint_safe.c](./102-free_listint_safe.c) | A function that frees a `listint_t` linked list safely (ie. can free lists containing loops). | `size_t free_listint_safe(listint_t **h)`
[103-find_loop.c](./103-find_loop.c) | A function that finds the loop contained in a `listint_t` linked list using a maximum of two variables. | `listint_t *find_listint_loop(listint_t *head)`


## Tasks 🛅

0. **rint list**
    * [0-print_listint.c](./0-print_listint.c): C function that prints all the elements of a `listint_t` linked list.
        - Returns the number of nodes in the `listint_t` list.

1. **List length**
    * [1-listint_len.c](./1-listint_len.c): `C` function that returns the number of elements in a `listint_t` linked list.

2. **Add node**
    * [2-add_nodeint.c](./2-add_nodeint.c): `C` function that adds a new node at the beginning of a `listint_t` linked list.
        - If the function fails - returns `NULL`.
        - Otherwise - returns the address of the new element.

3. **Add node at the end**
    * [3-add_nodeint_end.c](./3-add_nodeint_end.c): `C` function that adds a new node at the end of a `listint_t` linked list.
        - If the function fails - returns `NULL`.
        - Otherwise - returns the address of the new element.

4. **Free list**
    * [4-free_listint.c](./4-free_listint.c): `C` function that frees a `listint_t` linked list.

5. **Free**
    * [5-free_listint2.c](./5-free_listint2.c): `C` function that frees a `listint_t` linked list.
        - Sets the `head` to `NULL`.

6. **Pop**
    * [6-pop_listint.c](./6-pop_listint.c): `C` function that deletes the head node of a `listint_t` linked list.
        - If the linked list is empty - returns `0`.
        - Otherwise - returns the `head` node's data (`n`)`.

7. **Get node at index**
    * [7-get_nodeint.c](./7-get_nodeint.c): `C` function that locates a given node of a `listint_t` linked list.
        - If the node does not exist - returns `NULL`.
        - Otherwise - returns the located `node`.

8. **Sum list**
    * [8-sum_listint.c](./8-sum_listint.c): `C` function that returns the sum of all the data (`n`) of a `listint_t` linked list.
        - If the linked list is empty - returns `0`.
        - Otherwise - returns the sum of all the data (`n`).

9. **Insert**
    * [9-insert_nodeint.c](./9-insert_nodeint.c): `C` function that inserts a new node to a `listint_t` linked list at a given position.
        - If it is not possible to add the new node at index `idx`, or the function fails - returns `NULL`.
        - Otherwise - returns the address of the new `node`.

10. **Delete at index**
    * [10-delete_nodeint.c](./10-delete_nodeint.c): `C` function that deletes the node at a given index of a `listint_t` linked list.
        - If the function succeeds - returns `1`.
        - If the function fails - returns `-1`.

11. **Reverse list**
    * [100-reverse_listint.c](./100-reverse_listint.c): `C` function that reverses a `listint_t` linked list using a maximum of one loop and two variables.
        - Returns a pointer to the first `node` of the reversed list.

12. **Print (safe version)**
    * [101-print_listint_safe.c](./101-print_listint_safe.c): `C` function that prints a `listint_t` linked list safely (ie. can free lists containing loops).
        - Returns the number of `nodes` in the `listint_t` list.

13. **Free (safe version)**
    * [102-free_listint_safe.c](./102-free_listint_safe.c): `C` function that frees a `listint_t` linked list safely (ie. can free lists containing loops).
        - Returns the size of the list that was freed.
        - Sets the `head` to `NULL`.

14. **Find the loop**
    * [103-find_loop.c](./103-find_loop.c): `C` function that finds the loop contained in a `listint_t` linked list using a maximum of two variables.
        - If no loop is found - returns `NULL`.
        - Otherwise - returns the address of the `node` where the loop starts.
