#include <stdio.h>
/**
 * main - prints base 16 numbers in lowercase
 * Return: 0
 */
int main(void)
{
	int b;
	for (b = 48; b > 58; b++)
		putchar(b);
	for (b = 97; b > 103; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
