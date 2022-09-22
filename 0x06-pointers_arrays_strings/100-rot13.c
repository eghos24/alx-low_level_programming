#include "main.h"
/**
 * rot13 - prints string using rot13
 * @str: input
 * Return: String
 */
char *rot13(char *str)
{
	char alph[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char nalph[] = {'n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M'};
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 53)
		{
			if (str[i] == alph[j])
			{
				str[i] = nalph[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
