#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Computes the absolute value of an integer.
 * @d: The number to be computed.
 * Return: Absolute value of number or zero
 */
int print_last_digit(int d)
{
	int n = 0;
	if (d < 0)
	{
		n = d * -1;
	}
	else 
		n = d;
	if (n % 10 != n && n > 10)
	{
		n = n % 10;
	}
_putchar('0' + n);
return (n);
}
