#include "main.h"
/**
 * _strlen - count number of strings
 *@s: input string
 *Return: number of string
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
 *str_concat - add two string together
 *@s1: first input string
 *@s2: second input string
 *Return:concated string
 */
char *str_concat(char *s1, char *s2)
{
	int count1 = 0;
	int count2 = 0;
	char *ans;
	int size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size = _strlen(s1) + _strlen(s2) + 1;
	ans = malloc(sizeof(char) * size);
	if (ans == 0)
	{
		return (NULL);
	}
	else
	{
		while (s1[count1] != '\0')
		{
			ans[count1] = s1[count1];
			count1++;
		}
		while (s2[count2] != '\0')
		{
			ans[count1] = s2[count2];
			count1++;
			count2++;
		}
		return (ans);
	}
}
