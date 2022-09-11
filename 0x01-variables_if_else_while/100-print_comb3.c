#include<stdio.h>
/**
 * main - prints numbers
 *
 * Return: always(success)
*/
int main(void)
{
	int n,m;
	for (n = '0'; n <= '8'; n++)
	{
		for (m = '1'; m <= '9'; m++)
		{
			if ((n != m) && (n < m))
			{	
				putchar(' ');
				putchar(n);
				putchar(m);
				if(n <= '7')
				{
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
