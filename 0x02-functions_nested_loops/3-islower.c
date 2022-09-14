#include "main.h"

/**
 * int _islower(int c) - Entry point
 * Description: Checks if a charater is small letter.
 *@c: the integer value it recieves
 * Return: 1 if true, 0 if false.
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
