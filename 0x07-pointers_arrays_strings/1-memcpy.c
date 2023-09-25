#include "main.h"
/**
 * memcpy - function that copies memory areas
 * @dest: memory where stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int d = n;

	for (; r < d; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
