#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: arrat
 * @n: number of times aarray will be printed
 * Return: array
 */
void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < (n - 1); d++)
		printf("%d, ", a[n]);
	if (d == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}
