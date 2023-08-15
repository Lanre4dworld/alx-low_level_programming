#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98.
 * @b: the number to start counting from to 98
 * Return: void returns 0
 */
void print_to_98(int b)
{
	if (b < 98)
	{
		for (b = b; b < 98; b++)
			printf("%d, ", b);
		printf("%d\n", 98);
	}
	else
	{
		for (b = b; b > 98; b--)
			printf("%d, ", b);
		printf("%d\n", 98);
	}
}
