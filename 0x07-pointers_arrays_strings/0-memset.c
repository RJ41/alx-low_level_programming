#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: starting address to be filled
 * @b: desired value
 * @n: bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int d = 0;

	for (; n > 0; d++)
	{
		s[d] = b;
		n--;
	}
	return (s);
}
