#include <stdio.h>
/**
 * main - prints single digit numbers starting from 0
 * Return: 0
 */
int main(void)
{
	int n;
	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}