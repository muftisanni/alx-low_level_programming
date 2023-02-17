#include <stdio.h>

/**
 * main - the strating point
 *
 * for - loop through the numbers
 *
 * putchar - to print the numbers
 *
 * Return: return the result
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');
	return (0);

}
