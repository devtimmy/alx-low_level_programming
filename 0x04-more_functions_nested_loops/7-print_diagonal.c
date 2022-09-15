#include "main.h"
/**
 * print_diagonal - prints slash
 * @n: parameter
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\);

			if (i == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
