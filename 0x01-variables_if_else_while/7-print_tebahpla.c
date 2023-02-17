#include <stdio.h>

/**
 * main - the entry point
 *
 * for - to loop through the alphabets
 *
 * putchar - to print the letters
 *
 * Return: the exit point
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);

}
