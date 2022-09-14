#include "main.h"

/**
 * print_sign - Entry point
 * Description: prints if a number is +,-,0
 *@n: the integer value it recieves
 * Return: 1 if true, 0 if false.
 */
int print_sign(int n)
{
	if (n > 0)
	{	
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
}
