#include "main.h"
/**
 * print_last_digit - Computes the absolute value of an integer.
 * @d: The number to be computed.
 * Return: Absolute value of number or zero
 */
int print_last_digit(int d)
{
	if (d < 0)
	{
		d = d * -1;
	}
	if (d % 10 != d && d > 10)
	{
		d = d % 10;
	}
putchar('0' + d);
return (d);
}
