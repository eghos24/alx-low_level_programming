#include "main.h"
/**
 * _memcpy - starting point
 * @dest: input
 * @src: input pointer
 * @n: input range
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned  int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
