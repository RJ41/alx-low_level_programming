#include <stdio.h>
/**
 * main - prints all possible different combinatiosn of three three digits
 * Return: 0
 */
int main(void)
{
	int o, t, th;
	for (o = 48; o < 58; o++)
	{
		for (t = 49; t < 58; t++)
		{
			for (th = 50; th < 58; th++)
			{
				if (th > t && t > o)
				{
					putchar(o);
					putchar(t);
					putchar(th);
					if (o != 55 || t != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
