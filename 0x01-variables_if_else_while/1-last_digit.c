#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the entry ppoint
 *
 * srand -
 *
 * rand - random
 *
 * if - conditional statement to check the value of the number
 *
 * printf - print the output
 *
 * Return: value to output
 */

int main(void)
{
	int n;

	int l_numb;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	l_numb = n % 10;

	if (l_numb > 5)
		printf("Last digit of %d is %d and is greater than 5", n, l_numb);
	if (l_numb == 0)
		printf("Last digit of %d is %d and is 0", n, l_numb);
	if (l_numb < 6 && l_numb != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, l_numb);
	printf("\n");


	return (0);
}
