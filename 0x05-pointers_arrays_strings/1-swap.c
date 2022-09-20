#include "main.h"

/**
 * swap_int - it swaps the value
 * @a: input
 * @b: input
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
