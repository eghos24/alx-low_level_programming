#include "main.h"

/**
 * jack_bauer - entry point
 * Description: print every second of a day
 * Return: void
 */
void jack_bauer(void)
{
	int hours_tens, hours_ones, minutes_tens, minutes_ones, max_hour;

	for (hours_tens = '0'; hours_tens <= '2' ; hours_tens++)
	{	
		if (hours_tens == '2')
		{
			max_hour = '3';
		}
		else
		{
			max_hour = '9';
		}
		for (hours_ones = '0'; hours_ones <= max_hour; hours_ones++)
		{
			for (minutes_tens = '0'; minutes_tens <= '5'; minutes_tens++)
			{
				for (minutes_ones = '0'; minutes_ones <= '9'; minutes_ones++)
				{
					_putchar(hours_tens);
					_putchar(hours_ones);
					_putchar(':');
					_putchar(minutes_tens);
					_putchar(minutes_ones);
					_putchar('\n');
				}
			}
		}
	}
}
