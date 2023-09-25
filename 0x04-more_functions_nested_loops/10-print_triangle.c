#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * Return: 0
 */
void print_triangle(int size)
{
	int hash, indent;

	if (size > 0)
	{
		for (has = 1; hash <= size; hash++)
		{
			for (indent = size - hash; indent > 0; indent--)
				_putchar(' ');
			for (indent = 0; indent < hash; indent++)
				_putchar(' ');
			if (hash == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
