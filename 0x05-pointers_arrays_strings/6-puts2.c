#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int lint = 0;
	int c = 0;
	char *s = str;
	int q;

	while (*s != '\0')
	{
		s++;
		lint++;
	}
	c = lint - 1;
	for (q = 0; q <= c; q++)
		if (q % 2 == 0)
			_putchar(str[q]);
	_putchar('\n');
}
