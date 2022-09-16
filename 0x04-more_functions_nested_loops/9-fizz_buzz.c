#include <stdio.h>

/**
 * main - starting point
 *
 * Return: Alway success
 */
int main(void)
{
	int c = 1;

	while (c <= 100)
	{
		if ((c % 3 == 0) && (c % 5 == 0))
		{
			printf("Fizz Buzz");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", c);
		}
		if (c < 100)
		{
			printf(" ");
		}
		c++;
	}
	printf("\n");
	return (0);
}
