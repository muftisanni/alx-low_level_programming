#include <stdio.h>

/**
 * main - the entry
 *
 * for - to loop over the alphabets
 *
 * putchar - to print a letter at a time
 *
 * Return: The retrurn value
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
