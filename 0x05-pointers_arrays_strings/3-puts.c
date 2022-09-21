#include "main.h"
/**
 * _puts - prints
 * @istr: inputs
 *
 * Return : void
 */
void _puts(char *str)
{
		while (*str != '\0')
		{
			_putchar(*str + 0);
			str++;
		}
	_putchar('\n');
}
