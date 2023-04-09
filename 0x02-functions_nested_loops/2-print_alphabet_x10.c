#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet in lower case 10 times
*/

void print_alphabet_x10(void)
{
	int num;
	char alph;

	for (num =  0; num < 10; num++)
	{
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
	}
}
