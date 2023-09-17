#include "main.h"
#include <stdio.h>

/**
 * _abs - computes absolute value of int
 * @a: the number to be computed
 * Return: absolute value of integer
 */
int _abs(int a)
{
	if (a < 0)
	{
		int abs_val;

		abs_val = a * -1;
		return (abs_val);
	}
	return (a);
}
