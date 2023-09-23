#include <stdio.h>
/**
 * main - prints lowercase alphabet, followed by a new line
 * Return: 0
 */
int main(void)
{
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";
	int n;
	for (n = 0; n < 26; n++)
	{
		putchar(letters[n]);
	}
	putchar('\n');
	return (0);
}
