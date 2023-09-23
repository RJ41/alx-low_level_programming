#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints lowercase alphabet followed by a new line
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
