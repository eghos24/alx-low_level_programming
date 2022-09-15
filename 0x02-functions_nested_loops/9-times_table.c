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
	int p;
	int p_tens;
	int p_ones;


	for (r = '0'; r <= '9'; r++)
	{
		for (c = '0'; c <= '9'; c++)
		{		
			p = r * c;
			if (p <= '9')
			{
				_putchar('p');
			}
			else
			{
				p_tens = p/10;
				p_ones = p%10;
				_putchar(p_tens);
				_putchar(p_ones);
			}	
		}
	}
}
