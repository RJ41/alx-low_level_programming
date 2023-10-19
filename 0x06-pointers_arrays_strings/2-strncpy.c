#include "main.h"
/**
 * _strncpy - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * Return: 0
 */
char *_strncpy(char *dest, *src,int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	
	return dest;
}
