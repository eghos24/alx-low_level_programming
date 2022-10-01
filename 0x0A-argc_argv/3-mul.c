#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of the multiplication
 * @argc: counts number of arguments
 * @argv: arguments
 * Return: zero (success)
 * Return: one (error)
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
