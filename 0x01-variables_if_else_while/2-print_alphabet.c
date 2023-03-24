#include <stdio.h>

/**
* main - prints all lower case alphabets using putschar
* Return: 0 if succesful
*/

int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
