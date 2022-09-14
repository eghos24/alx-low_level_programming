#include "main.h"

/**
 * print_alphabet - enty point
 * Description: a function that prints the alphabet in lower letter
 * Return : void
 */
void print_alphabet(void)
{
	char ch;
	for( ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
