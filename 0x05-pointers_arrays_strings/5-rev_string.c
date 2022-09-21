#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints reverse
 * @s: input
 * Return: void
 */
void rev_string(char *s)
{
	int size, half, l;
	char first, second;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	size = l - 1;
	half = size / 2;
	while (half >= 0)
	{
		first = s[size - half];
		second = s[half];
		s[half] = first;
		s[size - half] = second;
		half--;
	}

}
