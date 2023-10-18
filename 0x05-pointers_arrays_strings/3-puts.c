#include "main.h"

/**
 * _puts - prints a string
 * @str: the string output
 * Return: void
 */
void _puts(char *str)
{
	int m = 0;

	while (str[m] != '\0')
	{
		_putchar(str[m]);
		m++;
	}
	_putchar('\n');
}
