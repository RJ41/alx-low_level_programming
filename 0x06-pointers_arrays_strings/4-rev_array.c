#include "main.h"
/**
 * reverse_array - reverses contents of an array
 * @a: value
 * @n: value
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int z;
	int x;

	for (z = 0; z < n--; z++)
	{
		x = a[z];
		a[z] = a[n];
		a[n] = x;
	}
}
