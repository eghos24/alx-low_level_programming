#include "main.h"

/**
 * times_table - multiplication of 9 in matrix form
 * Description: prints in matrix form
 * Return: void
*/
void times_table(void)
{
	int r;
       	int c;

	for (r = '0'; r <= '9'; r++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			_putchar(r*c);
		}
	}
}
