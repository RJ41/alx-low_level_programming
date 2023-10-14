#include "main.h"
#include <math.h>
#include <stdio.h>
/**
 * main - finds and prints largest prime factor
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	long int a;
	long int max;
	long int z;
	
	a = 612852475143;
	max = -1;
	
	while (a % 2 == 0)
	{
		max = 2;
		a /= 2;
	}
	for (z = 3; z <= sqrt(a); z = z + 2)
	{
		while (a % z == 0)
		{
			max = z;
			a = a / z;
		}
	}
	if (a > 2)
	{
		max = a;
	}
	printf("%ld\n", max);
	
	return (0);
}
