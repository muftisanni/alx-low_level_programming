#include "main.h"

/**
 * _abs -  an absolute value
 *
 * @a:  the entry
 *
 * Return: Always 0.
 */

int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		a = a * -1;
		return (a);
	}
	else
	{
		return (a);
	}
}