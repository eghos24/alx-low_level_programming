#include "main.h"
/**
 * print_array - prints out an array
 * @a: input array
 * @n: array content
 * Return: viod
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if(i > 0)
		{
			printf(" ");
		}
		printf("%d", a[i]);
		if(i < (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
