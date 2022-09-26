#include "main.h"
/*
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: value to set
 * @n: bytes of the memory
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int n;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
