#include "main.h"
/**
 * _memset - starting point
 * @s: input
 * @b: input pointer
 * @n: input range
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned  int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
