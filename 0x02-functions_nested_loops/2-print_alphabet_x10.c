#include "main.h"
/**
 * print_alphabet_x10: prints the alphabet ten times
 */
void print_alphabet_x10(void)
{
	char a;
	int t = 0;

	while (t <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
		t++;
	}
}
