#include <stdio.h>

/**
*main - prints two two-digit number como
*Return: 0 if successful
*/

int main(void)
{
	int a;
	int b;
	int c1;
	int c2;

	for (a = '0'; a <= '9'; a++)
	{
	for (b = '0'; b <= '9'; b++)
	{
	for (c1 = '0'; c1 <= '9'; c1++)
	{
	for (c2 = c1 + 1; c2 <= '9'; c2++)
	{
		putchar(a);
		putchar(b);
		putchar(' ');
		putchar(c1);
		putchar(c2);
		if (a != '9' || b != '9' || c1 != '8' || c2 != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
