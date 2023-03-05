#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to start printing from
 * Return: Always 0.
 */
void print_to_98(int n)
{
signed int i;
for (i = n; i <= 98; i++)
{
if (i != n)
{
printf(", ");
}
printf("%d", i);
}
printf("\n");
}
