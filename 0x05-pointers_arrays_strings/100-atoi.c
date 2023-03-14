#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 * Return: A integer
 */

int _atoi(char *s)

{
	int sign = 1, i = 0;
	unsigned int num = 0;
	while (s[i])
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = (num * 10)+(s[i] - '0');
		}
		i++;
	}
num = sign * num;
return (num);
}
