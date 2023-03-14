#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 * Return: A integer
 */

int _atoi(char *s)

{
	int sign = 1, i = 0, br = 0;
	unsigned int num = 0;

	while (s[i])
	{
		while (s[i] >= 48 && s[i] <= 57)
		{
			br = 1;
			num = (num * 10) + (s[i] - '0');
			i++;
		}
		if (s[i] == 45)
		{
			sign *= -1;
		}
		if (br == 1)
		{
			break;
		}
		i++;
	}
num = sign * num;
return (num);
}
