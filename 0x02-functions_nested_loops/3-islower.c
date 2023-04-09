#include "main.h"

/**
* _islower - checks for lowercase
* @c: is the character to be checked
* Return: 1 if c is lowercase and 0 if it's not
*/


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
