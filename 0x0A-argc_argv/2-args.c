#include "main.h"
#include <stdio.h>
/**
 * main - prints name of program
 * @argc: counts number of arguments
 * @argv: arguments
 * Return: always zero (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
	printf("%s\n", argv[i]);
	i++;
	}
	return (0);
}
