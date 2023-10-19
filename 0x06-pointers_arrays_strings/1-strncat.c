#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: input value
 * @src: input value
 * @n: max number of bytes
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	
	while (dest[dest_len] != '\0')
		dest_len++;
	
	for (int i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}
	
	dest[dest_len] = '\0';
	
	return dest;
}
