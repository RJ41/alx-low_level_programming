#include "main.h"

/**
 * print_most_numbers - prints numbers from 0-9 followed by a new line
 * Return: 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2)
		{
			if (n != 4)
			{
				_putchar(n);
			}
		}
	}
	_putchar('\n');
}
