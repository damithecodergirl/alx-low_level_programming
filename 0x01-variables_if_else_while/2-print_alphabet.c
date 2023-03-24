#include <stdio.h>

/**
* main - prints all lower case alphabets using putschar
* Return: 0 if succesful
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
