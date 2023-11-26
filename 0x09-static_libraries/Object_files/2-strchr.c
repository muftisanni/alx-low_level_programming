#include "main.h"
#include <stddef.h>
/**
 * _strchr -  funcion
 * @s: string of char
 * @c:  character
 * Return:  result
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
}