#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - assigns a new value to n whenever it is executed
* if the number is greater than zero: prints n is positive
* if the number is equal to zero: prints n is zero
* if the number is  less than zero: prints n is negative
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));    /*generates a random number*/
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		{
		printf("%i is positive\n", n);
		}
	else if (n < 0)
		{
		printf("%i is negative\n", n);
		}
	else if (n == 0)
		{
		printf("%i is zero\n", n);
		}
	/* your code goes there */
	return (0);
}
