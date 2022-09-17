#include <stdio.h>

/**
 * main - prints prime numbers
 *
 * Return: viod
 */

int main(void)
{
	long digit = 612852475143;
	long divider = 2;
	long answer = 0;

	while (digit != 1)
	{
		if (digit % divider == 0)
		{
			digit = digit / divider;
			answer = divider;
		}
		divider++;
	}
	printf("%ld\n", answer);
	return (0);
}

