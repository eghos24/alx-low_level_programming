#include "main.h"

/**
 * jack_bauer - entry point
 * Description: print every second of a day
 * Return: void
 */
void jack_bauer(void)
{
	int hours_tens, hours_ones, minutes_tens, minutes_ones;

	for (hours_tens = '0'; hours_tens <= '3' ; hours_tens++)
	{ 
		for (hours_ones = '0'; hours_ones < '5'; hours_ones++)
		{
			for (minutes_tens = '0'; minutes_tens < '6'; minutes_tens++)
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
