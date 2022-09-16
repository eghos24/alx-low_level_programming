#include "main.h"
/**
 * print_numbers - prints numbers
 * Return:void
 */

void print_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		if ((c != 2) && (c != 4))
		{
			_putchar(c + '0');
		}
		c++;
		
	}
	_putchar('\n');
}
