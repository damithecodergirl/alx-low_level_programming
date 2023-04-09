#include "main.h"

/**
* _isalpha - checks for alphabetic character
* @c: character to be checked
* Return: 1 if it's and alphabet, 0 if it isn't
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
