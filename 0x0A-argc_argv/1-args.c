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

	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
