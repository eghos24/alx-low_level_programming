#include "main.h"
/**
 * leet - prints 1337
 * @str: input
 * discription: Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * Return: String
 */
char *leet(char *str)
{
	char alph[] = {"aAeEoOtTlL"};
	char nalph[] = {"4433007711"};
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		j = 0;
		while (j <= 10)
		{
			if (str[i] == alph[j])
			{
				str[i] = nalph[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
