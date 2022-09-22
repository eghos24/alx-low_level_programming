#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: input
 * @src: input
 * @n: number of string to be copied
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int j;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
