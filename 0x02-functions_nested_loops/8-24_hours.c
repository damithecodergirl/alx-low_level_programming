#include "main.h"
#include <stdio.h>

/**
* jack_bauer - Prints every minute of the day
* @a, @b: stores the value for minutes and hour
*/

void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
	for (b = 0; b < 60; b++)
	{
	printf("%02d:%02d", a, b);
	putchar('\n');
	}
	}
}
