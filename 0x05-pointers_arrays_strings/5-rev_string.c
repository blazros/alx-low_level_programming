#include "main.h"


/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 * Return: void
 */

void rev_string(char *s)
{
	int n = 0, length = 0;
	char tempo;

	while (s[n])
	{
		n++;
		length++;
	}
	for (n -= 1; n >= length / 2; n--)
	{
		tempo = s[n];
		s[n] = s[length - 1 - n];
		s[length - 1 - n] = tempo;
	}
}
