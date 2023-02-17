#include <stdio.h>

/**
 * main - the entry point
 *
 * for - to loop over the alphabets
 *
 * if - to set the conditiosn to remove q and e
 *
 * putchar - to print letters
 *
 * Return: the return value
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	putchar('\n');
	return (0);
}
