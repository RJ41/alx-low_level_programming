#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times \ should be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, c;
		
		for (x = 0; x < n; x++)
		{
			for (c = 0; c < n; c++)
			{
				if (c == x)
					_putchar('\\');
				else
					if (c < x)
						_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
