#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int i;
char arr1[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
for (i = 0; i < 8; i++)
{
putchar(arr1[i]);
}
putchar('\n');
return (0);
}
