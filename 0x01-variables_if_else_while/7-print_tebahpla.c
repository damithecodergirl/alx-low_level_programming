#include <stdio.h>

/**
* main - prints the lowercase in reverse
* Return: 0 if successful
*/

int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
	putchar(alp);
	}
	putchar('\n');
	return (0);
}
