#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @n: pointer
 * Return: 0
 */
char *string_toupper(char *n)
{
	int d;
	
	d = 0;
	while (n[d] != '\0')
	{
		if (n[d] >= 'a' && n[d] <= 'z')
			n[d] = n[d] - 32;
		d++;
	}
	return (n);
}
