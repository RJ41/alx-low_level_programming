#include "main.h"

/**
 * print_most_numbers - prints numbers from 0-9 followed by a new line except 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int h;

	for (h = 48; h <= 57; h++)
	{
		if (h != 50)
		{
			if (h != 52)
			{
				_putchar(h);
			}
		}
	}
	_putchar('\n');
}
