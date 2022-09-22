#include "main.h"
#include <stdio.h>
/**
 * *_strcat - function that concatenates 2 strings
 * @dest: A string to be appended to
 * @src: A string to be appended
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
