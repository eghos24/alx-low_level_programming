#include "main.h"
/**
 * print_rev - print 
 * @s: input string
 *
 * Return; Void
 */
void print_rev(char *s)
{
	int tem;
	int j;

	for (tem = 0; s[tem] != '\0'; tem++)
	{
	}
	j = tem - 1;
	while (tem >= 0)
	{
		_putchar (s[j]);
		j --;
	}
	
	_putchar('\n');
}
