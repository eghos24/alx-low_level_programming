#include "function_pointers.h"
/**
 * array_iterator - function
 * @action: input function
 * @array: input array
 * @size: input size of array
 * Return: o
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
