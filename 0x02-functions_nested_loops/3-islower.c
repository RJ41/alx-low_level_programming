#include "main.h"
/**
 * islower - checks for lowerase characters
 * Return: 1 if c is lowercase or 0 if otherwise
 */
int islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
