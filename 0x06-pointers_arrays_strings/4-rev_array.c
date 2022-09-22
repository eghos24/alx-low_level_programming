#include "main.h"
/**
 * reverse_array - prints reverse of array content
 * @a: input array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int first_digit;
	int last_digit;
	int length = 0;

	while (length < n / 2)
	{
		first_digit = a[length];
		last_digit = a[n - length - 1];
		a[length] = last_digit;
		a[n - length - 1] = first_digit;
		length++;
	}
}
