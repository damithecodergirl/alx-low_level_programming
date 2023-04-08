#include "main.h"

/**
* main - prints lower case with a prototype function in "main.h"
* Return: 0 if successful 
*/

void print_alphabet(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');

	return(0);
}
