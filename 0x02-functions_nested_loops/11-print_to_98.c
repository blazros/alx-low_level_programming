#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to start printing from
 * Return: Always 0.
 */
void print_to_98(int n)
{
signed int i, j;
if (n < 98)
{
for (i = n; i <= 98; i++)
{
if (i != n)
{
printf(", ");
}
printf("%d", i);
}
}
else if (n > 98)
{
for (j = n; j >= 98; j--)
{
if (j != n)
{
printf(", ");
}
printf("%d", j);
}
}
else
printf("98");
printf("\n");
}
