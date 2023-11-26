#include "main.h"

/**
 * _memset - This is function copy the number of the character to S
 * @s: This is my entry and return
 * @b: This is the character to copy
 * @n: This is the number of Bytes
 *
 * Return: This is my result and Return S
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n ; a++)
	{
		s[a] = b;
	}
	return (s);
}