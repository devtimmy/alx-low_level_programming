#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 Always Success
 */
int (main)
{
	int n;
	srand(time));
	n = rand() - RAND_MAX / 2;
	if (n==0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is positive\n", n);
	}
	return(0);
}

