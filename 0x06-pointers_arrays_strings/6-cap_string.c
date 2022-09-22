#include "main.h"
/**
 * cap_string - carpitalizes all words of a string
 * @str: input string
 * Return: string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == ('\t')
				|| str[i] == '\n' || str[i] == ','
				|| str[i] == ';' || str[i] == '.'
				|| str[i] == '!' || str[i] == '?'
				|| str[i] == '"' || str[i] == '('
				|| str[i] == ')' || str[i] == '{'
				|| str[i] == '}')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}
