#include "main.h"

/**
 * print_alphabet - enty point
 * Description: a function that prints the alphabet in lower letter 10 times
 * Return : void
 */
void print_alphabet_x10(void)
{
	char ch;
	int count;

	for (count = 0; count <= 10; count++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
