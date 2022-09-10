#include <stdio.h>
/**
 * main - print in reverse form
 *
 * Return: always(success)
*/
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

