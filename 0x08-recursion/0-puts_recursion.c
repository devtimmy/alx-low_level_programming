#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: a string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar("%s\n", *s);
	_puts_recursion(++s);
}
