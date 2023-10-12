#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: how many times the character should be printed
 * Return: 0
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int d;

		for (d = 1; d <= n; d++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
