#include <stdio.h>

/**
* main - prints the combinations of two digits without repition
* Return: 0 if successful
*/

int main(void)
{
	int c1;
	int c2;

	for (c1 = '0'; c1 <= '9'; c1++)
	{
		for (c2 = c1 + 1; c2 <= '9'; c2++)
		{
		putchar(c1);
		putchar(c2);

		if (c1 != '8' || c2 != '9')
		{
		putchar(',');
		putchar(' ');
		}

		}
	}
	putchar('\n');
	return (0);
}
