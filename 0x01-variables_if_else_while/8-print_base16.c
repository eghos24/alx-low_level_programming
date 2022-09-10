#include <stdio.h>
/**
 * main - prints lowercase base
 *
 * Return: always(success)
*/
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
}
	putchar('\n');
	return (0);
}

