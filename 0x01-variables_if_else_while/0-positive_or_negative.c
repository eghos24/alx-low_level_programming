#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints whether the variable is positive or negative
 * srand - uses time to generate a random number
 * @n : contains the number
 * Return : 0
*/
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
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
					return (0);
}
