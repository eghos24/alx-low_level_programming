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
	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
        _putchar('\n');
}
