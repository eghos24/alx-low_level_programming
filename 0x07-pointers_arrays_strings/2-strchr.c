#include "main.h"
#include <stdlib.h>
/**
 * _strchr - returns pointer to first occurance of character
 * @s: input string
 * @c: input charachter
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *f = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			f = &s[i];
			return (f);
		}
		i++;
	}
	return (NULL);
}

