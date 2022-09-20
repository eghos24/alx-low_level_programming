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

	for (--tem; tem >=0; --tem)
		_putchar(s[tem]);
	
	_putchar('\n');
}
