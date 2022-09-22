#include "main.h"
/**
 * string_toupper - convert all lower letters to uppercase
 * @str: input
 * Return: void
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] <= 122 && str[i] >= 97)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
