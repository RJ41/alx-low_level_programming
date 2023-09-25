#include "main.h"

/**
 * more_numbers - prints 0-14 ten times followed by a new line
 * Return: 0
 */
void more_numbers(void)
{
	char n, o;

	for (n = 0; n < 10; n++)
	{
		for (o = 0; o < 15; o++)
		{
			if (o >= 10)
			{
				_putchar(o / 10 + '0');
				_putchar(o % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
