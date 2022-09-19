#include "main.h"
/**
 * print_array - prints n element of an array of integer
 * @a: integer
 * @n: integer
 * Return: array
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
			if (i < (n - 1))
			{
			printf(", ");
			}
	}
		printf("\n");
}
