#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: input number
 * Return: void
 */
void print_diagonal(int n)
{
	int column = 0;
	int row;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (column < n)
		{
			row = 0;
			while (row <= (column - 1))
			{
				_putchar(32);
				row++;
			}
			_putchar('\\');
			_putchar('\n');
			column++;
		}
	}
}
