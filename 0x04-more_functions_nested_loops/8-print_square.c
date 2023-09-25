#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_squares(int size)
{
	int g, h;
	
	h = 0;
	
	if (size < 1)
		_putchar('\n');
	
	while (h < size)
	{
		g = 0;
		
		while (g < size)
		{
			_putchar('#');
			g++;
		}
		_putchar('\n');
		h++;
	}
}
