#include "main.h"
/**
 *create_array - creates an array of chars
 *@size: size of the array
 *@c: the string
 *Return: array or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	/*Define values with malloc*/
	array = malloc(sizeof(char) * size);

	/*to handle malloc return*/
	if (array == 0)
	{
		return (NULL);
	}
	else
	{
		while (i < size) /*while loop for create array*/
		{
			array[i] = c;
			i++;
		}
	}
	return (array);
}
