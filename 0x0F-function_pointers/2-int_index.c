#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: input size
 * @cmp: input fucntion
 * Return: -1(if no match)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int ans;

	if (size <= 0)
	{
		return (-1);
	}
		for (i = 0; i < size; i++)
		{
			ans = cmp(array[i]);
			if (ans == 1)
			{
				ans = i;
				break;
			}
		}
		return (ans);
		else
		{
			return (-1);
		}
}
