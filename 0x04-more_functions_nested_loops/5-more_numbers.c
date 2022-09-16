#include "main.h"

/**
 * more_numbers - prints 1 to 14 ten times
 * Description: prints 1 to 14 ten times
 * Return: viod
 */
void more_numbers(void)
{
	int column = 0;
	int row;
	int row_ones;
	int row_tens;

	while (column <= 9)
	{
		row = 0;
		while (row <= 14)
		{
			row_ones = row % 10;
			row_tens = row / 10;
			if (row > 9)
			{
				_putchar(row_tens + '0');
			}
			_putchar(row_ones + '0');
			row++;
		}
		_putchar('\n');
		column++;
	}
}
