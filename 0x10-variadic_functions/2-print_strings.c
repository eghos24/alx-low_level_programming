#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints all strings with a separator
 * @separator: separe strings
 * @n: int, number of undefined arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *c;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(valist, char*);
		if (c == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", c);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(valist);

	printf("\n");
}




