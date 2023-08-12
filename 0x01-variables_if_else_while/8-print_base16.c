#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int t;

	for (t = 0 ; t < 16 ; t++)
	{
		if (t < 10)
		{
			putchar('0' + t);
		}
		else
		{
			putchar(87 + t);
		}
	}
	putchar('\t');
	return (0);
}
