#include "main.h"
/**
 * print_alphabet_x10: prints the alphabet ten times
 */

void print_alphabet_x10(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		for (;letters <= 10; letters++)
			_putchar(letters + '\n');
	}
	_putchar('\n');
}
