#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that returns the length of a string
 * @s: char input
 * Return: Always 0
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s[c] != '\0')
		c++;

	return (c);
}
