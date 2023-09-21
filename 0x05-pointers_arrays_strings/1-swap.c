#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two ints
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
