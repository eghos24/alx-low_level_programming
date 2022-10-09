#include "main.h"
/**
 * argstostr - prints args
 * @ac: takes in width of grid
 * @av: height of grid
 * Return: the args one line at a time
 */

char *argstostr(int ac, char **av)
{
	int i, j, count, size, c;
	char *ans;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		for (j = 1; av[i][j] != '\0'; j++)
		{
			count++;
		}
	}
	size = count + 1;
	ans = malloc(sizeof(char) * size);
	if (ans == 0)
	{
		return (NULL);
	}
	c = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ans[c] = av[i][j];
			c++;
		}
		ans[c] = '\n';
		c++;
	}
	return (ans);
}
