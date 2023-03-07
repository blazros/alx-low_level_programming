#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */

int main (void)
{
int i;
long n = 612852475143;
double sq = sqrt(n);
	while (n % 2 == 0)
	{
		n /= 2;
	}
	while (n % 3 == 0)
	{
		n /= 3;
	}
	while (n % 7 == 0)
	{
		n /= 2;
	}
	for (i = 5; i <= sq; i += 6)
	{
		while (n % i == 0)
		{
			n /= i;	
		}
	}
	printf("%ld \n", n);
return (0);
}
