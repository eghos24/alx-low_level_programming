#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: prints the absolite value of a given number
 *@n: the integer value it recieves
 * Return: last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	_putchar(i);
	return (i);
}
