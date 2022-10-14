#include "variadic.h"
/**
 * sum_them_all - sum all input
 * @n : input
 * @...
 * Return: 0 or answer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, unsigned int);
	}
	va_end(valist);
	return (sum);
}
