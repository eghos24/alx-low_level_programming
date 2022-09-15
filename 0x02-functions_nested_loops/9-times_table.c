#include "main.h"

/**
 * times_table - multiplication of 9 in matrix form
 * Description: prints in matrix form
 * Return: void
*/
void times_table(void)
{
	for (r = '0'; r < '10'; r++)
	{
		for (c = '0'; c < '10'; c++)
		{
			_putchar(r*c);
		}
	}
}
