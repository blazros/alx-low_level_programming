#include "main.h"


/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 * Return: void
 */

void rev_string(char *s)

{
	int c = 0;
	while (s[c] != '\0')
	{
		_putchar(s[c]);
		c++;
	}
	_putchar('\n');
	for (c -= 1; c >= 0; c --)
	{
		_putchar(s[c]);
	}
}
