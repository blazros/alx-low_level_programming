#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * print_alphabet - prints alphabets
 * Return: Always 0.
 */
void print_alphabet(void)
{
int i;
char alph[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'
, 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
for (i = 0; i < 26; i++)
{
putchar(alph[i]);
}
putchar('\n');
return;
}
