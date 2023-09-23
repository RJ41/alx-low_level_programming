#include <stdio.h>
/**
 * main - prints lowercase alphabet, then uppercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char letters[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;

	for (n = 0; n < 52; n++)
	{
		putchar(letters[n]);
	}
	putchar('\n');
	return (0);
}
