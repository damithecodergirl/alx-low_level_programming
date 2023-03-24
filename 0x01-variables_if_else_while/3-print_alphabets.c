#include <stdio.h>

/**
* main - prints lower and upper case
* Return: 0 if succesful
*/

int main(void)
{
	char lc;
	char uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
	putchar(lc);
	}
	for (uc = 'A'; uc <= 'Z'; uc++)
	{
	putchar(uc);
	}
	putchar('\n');

	return (0);
}
