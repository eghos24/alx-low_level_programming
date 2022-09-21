#include "main.h"
/**
 * puts_half - print
 * @*str: input string
 *
 * Return; Void
 */
void puts_half(char *str)
{
        int i;
	int length;
	int half;
	for (length = 0; str[length] != '\0' ; length ++)
	{
	}
	half = length / 2;
	if ( length % 2 != 0)
	{
		i = (((length - 1) / 2) + 1);
	}
	else
	{
		i = half;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
        _putchar('\n');
}
