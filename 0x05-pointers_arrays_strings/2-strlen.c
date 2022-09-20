#include "main.h"
/**
 * _strlen - prints
 * @s: input
 *
 * Return: void
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; ++s)
	{
		c++;
	}
	return (c);
}
