#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: counts number of arguments
 * @argv: arguments
 * Return: zero (success)
 * Return: one (error)
 */

int main(int argc, char *argv[])
{	
	int i = 1;
	int sum = 0;
	int n;

	if(argc < 1)
	{
		printf ("0\n");
	}
	while (i < argc)
	{
		for (n = 0; argv[i][n] != '\0'; n++)
		{
			if (isdigit(argv[i][n]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	sum = sum + atoi(argv[i]);
	i++;
	}
	printf("%d\n", sum);
	return (0);
}
