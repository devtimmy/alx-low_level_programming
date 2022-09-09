#include <stdio.h>
/**
 * main - Print all alphabet letters in lowercase except q and e
 * Return: 0 Always Success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar ('\n');

	return (0);
}
