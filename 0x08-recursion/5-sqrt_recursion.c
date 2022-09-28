#include "main.h"
/**
 * _sqrt_check - evaluate function sqrt
 * @i: interger
 * @n: interger
 * Return: checks sqrt
 */
int _sqrt_check(int i, int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (i * i < n)
	{
		return (_sqrt_check(i + 1, n));
	}
	else if (i * i == n)
	{
		return (i);
	}

	return (-1);
}

/**
 * _sqrt_recursion - returns square of natural numbers
 * @n: integer
 * Return: square
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_check(i, n));
	}
}
