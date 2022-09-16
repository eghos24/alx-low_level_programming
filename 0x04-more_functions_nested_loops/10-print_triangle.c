#include "main.h"

/**
 * print_triangle - prints diagonal lines
 * @size: input number
 * Return: void
 */
void print_triangle(int size)
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
			while (row < ((size - column) -1 ))
			{
				_putchar(32);
				row++;
			}
			row = 0;
			while (row <= column)
			{
				_putchar('#');
				row++;
			}
			_putchar('\n');
			column++;
		}
	}
}
