#include "main.h"
#include <stdio.h>

/**
 * _strlen - return the lengh of a string
 * @s: string to be printed
 * Return: 0
 */
size_t _strlen(char *s)
{
	size_t length = 0;
	
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
