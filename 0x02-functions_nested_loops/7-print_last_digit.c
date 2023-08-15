#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @b: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int b)
	{
		if (b < 0)
		b = b * -1;
		_putchar((b % 10) + '0');
		return (b % 10);
		}
