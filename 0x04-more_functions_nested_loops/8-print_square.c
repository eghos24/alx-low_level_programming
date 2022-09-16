#include "main.h"

/**
 * print_square - prints diagonal lines
 * @size: input number
 * Return: void
 */
void print_square(int size)
{
	int column = 0;
	int row;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (column < size)
		{
			row = 0;
			while (row < size)
			{
				_putchar('#');
				row++;
			}
			_putchar('\n');
			column++;
		}
	}
}
