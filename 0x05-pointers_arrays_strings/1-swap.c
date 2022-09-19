#include "main.h"
#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers
 * @a: input
 * @b: input
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d\n", a, b);
	return (0);
}
