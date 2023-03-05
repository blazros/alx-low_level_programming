#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void jack_bauer(void)
{
int i, j, k;
char hour1[] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'
, '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '2', '2', '2', '2'};
char hour2[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'
, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3'};
	for (i = 0; i < 24; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				_putchar(hour1[i]);
				_putchar(hour2[i]);
				_putchar(58);
				_putchar(j + '0');
				_putchar(k + '0');
				_putchar('\n');
			}
		}
	}
}
