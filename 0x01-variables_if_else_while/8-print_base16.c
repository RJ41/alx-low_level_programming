#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints base 16 numbers in lowercase
 * Return: 0
 */
int main(void)
{
	int b;
	char base;

	for (b = '0'; b > 'f'; b++)
		putchar(b);

	for (base = 'a'; base > 'f'; base++)
		putchar(base);

	putchar('\n');
	return (0);
}
