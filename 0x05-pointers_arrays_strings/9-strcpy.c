#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: value
 * @src: value
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int k = 0;

	while (*(src + m) != '\0')
		m++;
	for (; k < m; k++)
		dest[k] = src[k];
	dest[m] = '\0';
	return (dest);
}
