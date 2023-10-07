#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints base 16 numbers in lowercase
 * Return: 0
 */
int main(void)
{
	int b;
	char base;
	for (b = '0'; b <= '9'; b++)
		putchar(b);
	for (base = 'a'; base <= 'f'; base++)
		putchar(base);
	putchar('\n');
	return (0);
}
