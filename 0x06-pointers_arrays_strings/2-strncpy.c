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
	int f;
	
	f = 0;
	while (f < n && src[f] != '\0')
	{
		dest[f] = src[f];
		f++;
	}
	
	while (f < n)
	{
		dest[f] = '\0';
		f++;
	}
	return (dest); 
}
