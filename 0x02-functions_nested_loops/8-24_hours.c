#include "main.h"
/**
 * jack_bauer - prints time table in this format: DD:NN
 * Return: the sum of two numbers.
 */
void jack_bauer(void)
	{
		int d, n;

		for (d = 0; d < 24; d++)
			{
				for (n = 0; n < 60; n++)
					{
						_putchar((d / 10) + '0');
						_putchar((d % 10) + '0');
						_putchar(':');
						_putchar((n / 10) + '0');
						_putchar((n % 10) + '0');
						_putchar('\n');
					}
			}
	}
