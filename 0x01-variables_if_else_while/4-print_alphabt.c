#include <stdio.h>
/**
 * main - prints all small letters except for q,e
 *
 * Return: Always(success)
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch == 'q') || (ch == 'e'))
		{
		}
		else
		{
			putchar(ch);
		}

	}
	putchar('\n');
	return (0);
}

