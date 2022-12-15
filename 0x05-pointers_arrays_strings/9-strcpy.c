#include "main.h"
/**
 * _strcpy - copies src to dest
 * @src: char
 * @dest: char
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
