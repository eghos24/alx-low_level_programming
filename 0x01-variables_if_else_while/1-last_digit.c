#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
		int n;
		int lastDigit;
		char *lastString;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		lastDigit = n % 10;
		if (lastDigit > 5)
		{
			lastString = "and is greater than 5";
		}
		else if (lastDigit == 0)
		{
			lastString = "and is 0";
		}
		else
		{
			lastString = "and is less than 6 and not 0";
		}
		printf("Last digit of %d is %d %s\n", n, lastDigit, lastString);

		return (0);
}
