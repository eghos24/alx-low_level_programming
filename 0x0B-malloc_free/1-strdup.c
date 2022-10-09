#include "main.h"
/**
 *_strlen - counts number of char
 *@s: input char
 *Return: number
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *_sprcpy - duplicate char
 *@dest: dest address
 *@src: sourse address
 *Return: destination address
 */
char *_sprcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 *_strdup - creates destination address
 *@str: input char
 *Return: address
 */
char *_strdup(char *str)
{
	char *dest;
	int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	dest = malloc(sizeof(char) *  size);
	if (dest == 0)
	{
		return (NULL);
	}
	_sprcpy(dest, str);
	return (dest);
}
