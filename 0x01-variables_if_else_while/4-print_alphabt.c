#include <stdio.h>

/**
* main - prints out all lowercase except e and q
* Return: 0 if succesful
*/

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
	if (lc != 'e' && lc != 'q')
		{
		putchar(lc);
		}
	}
	putchar('\n');
}
