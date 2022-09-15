#include "main.h"

/**
 * positive_or_negative - print positive or nagvet
 * @n: input value
 * description: funtion to return
 * Return: void
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
