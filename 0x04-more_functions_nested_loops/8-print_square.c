#include "main.h"

/**
 * main - check the code
 * @size: size of the square
 * Return: Always 0.
 */
void print_squares(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int g, h;
		
		for (g = 0; g < size; g++)
		{
			for (h = 0; h < size; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
