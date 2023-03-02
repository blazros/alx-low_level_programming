#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (i = 0; i < 52; i++)
{
putchar(alphabet[i]);
}
putchar('\n');
return (0);
}
