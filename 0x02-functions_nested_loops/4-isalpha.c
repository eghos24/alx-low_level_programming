#include "main.h"

/**
 * _isalpha - Entry point
 * Description: Checks if a charater is letter.
 *@c: the integer value it recieves
 * Return: 1 if true, 0 if false.
 */
int _isalpha(int c)
{
	int i, j;

	for (j = 'A'; j <= 'Z'; j++)
	{
		if (j == c)
		{
			return (1);
		}
	}
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
