#include "main.h"
/**
 * print_rev - print 
 * @*s: input string
 *
 * Return; Void
 */
void print_rev(char *s)
{
	int tem;

	for (tem = 0; s[tem] != '\0'; tem++)
	{
	}
	while (tem >= 0)
	{
		_putchar (s[tem]);
		tem --;
	}
	
	_putchar('\n');
}
