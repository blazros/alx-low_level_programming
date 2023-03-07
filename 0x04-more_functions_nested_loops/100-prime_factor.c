#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */

int main(void)

{

	long x, maxf;
	long number = 612852475143;

	for (x = 1; x <= number; x++)
	{
	if (number % x == 0)
	{
	maxf = number / x;
	}
	}
	printf("%ld\n", maxf);
	return (0);

}
