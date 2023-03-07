#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
long n = 612852475143;
long maxPrime = -1;
while (n % 2 == 0)
{
maxPrime = 2;
n /= 2;
}
while (n % 3 == 0)
{
maxPrime = 3;
n = n / 3;
}
for (i = 5; i <= sqrt(n); i += 6)
{
while (n % i == 0)
{
maxPrime = i;
n = n / i;
}
while (n % (i + 2) == 0)
{
maxPrime = i + 2;
n = n / (i + 2);
}
}
if (n > 4)
maxPrime = n;
return (maxPrime);
}
