#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: empty output
 */
void times_table(void)
{
	int a, b, c, x, y;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (c > 9)
{
y = c % 10;
x = (c - y) / 10;
if (b != 0)
{
_putchar(44);
_putchar(32);
}
_putchar(x + '0');
_putchar(y + '0');
}
else
{
if (b != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(c + '0');
}
}
_putchar('\n');
}
}
