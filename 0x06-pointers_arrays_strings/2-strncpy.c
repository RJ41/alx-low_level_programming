#include "main.h"
/**
 * _strncpy - concatenate two strings using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: value
 * Return: 0
 */
char *_strncpy(char *dest,char *src,int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return dest;
}
