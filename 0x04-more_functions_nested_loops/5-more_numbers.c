#include "main.h"

/**
 * more_numbers - prints 0-14 ten times followed by a new line
 * Return: 0
 */
void more_numbers(void)
{
	char n;
	
	n = "01234567891011121314";

	while (n <= 11)
	{
		_putchar(n);
	}
	_putchar('\n');
	return (0);
}
