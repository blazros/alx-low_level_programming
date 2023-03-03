#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i, j;
char alph[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'
, 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
for (j = 0; j < 10; j++)
{
	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
}
return;
}
