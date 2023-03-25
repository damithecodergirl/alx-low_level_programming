#include <stdio.h>

/**
* main - prints 0 to 9 to stdout
* Return: 0 if successful
*/

int main(void)
{
	for (int num = '0'; num <= '9'; num++)
	{
	putchar(num);
	}
	putchar('\n');
}
