#include "main.h"
#include <stdio.h>
void jack_bauer(void)
{
	int h, m;
	for (h = '0'; h < 24; h++)
	{
		for (m = '0'; m < 60; m++)
		{
			putchar(h);
			putchar(':');
			putchar(m);
			putchar('\n');
		}
	}
}
