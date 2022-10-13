#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: input
 * @f: pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
