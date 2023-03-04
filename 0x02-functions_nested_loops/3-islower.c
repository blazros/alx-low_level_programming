#include "main.h"
#include <stdio.h>
int _islower(int c)
{
	int t = c;
	if (t >= 97 && t <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
