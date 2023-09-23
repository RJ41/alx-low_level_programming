#include <stdio.h>
/**
 * main - prints all possible different combinations of two-digit numbers
 * Return: 0
 */
int main(void)
{
	int o, t;
	for (o = 48; o <= 56; o++)
	{
		for (t = 49; t <= 57; t++)
		{
			if (t > o)
			{
				putchar(o);
				putchar(t);
				if (o != 56 || t != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
