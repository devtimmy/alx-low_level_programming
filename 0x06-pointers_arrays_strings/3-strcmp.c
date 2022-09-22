#include "main.h"
#include <stdio.h>
/**
 * _strcmp - To compare to strings
 * @s1: a string to be compared
 * @s2: a string to be compared
 * Return: cmp
 */
int _strcmp(char *s1, char *s2)
{
	char *str_one = s1;
	char *str_two = s2;

	while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
	{
		str_one++;
		str_two++;
	}

	return (*str_one - *str_two);
}
