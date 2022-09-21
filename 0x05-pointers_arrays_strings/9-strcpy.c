#include "main.h"
/**
 * *_strcpy - copies the string pointed t by src, including the termination null byte
 * @dest: input
 * @src: input
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)

{
	int a = 0;

	while ( src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = ('\0');
	return (dest);
}
