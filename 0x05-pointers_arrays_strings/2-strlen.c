#include "main.h"
#include <stdio.h>

/**
 * _strlen - return the lengh of a string
 * @str: string to be printed
 * Return: 0
 */
size_t _strlen(char *str)
{
	size_t length = 0;
	
	while (*str++)
		length++;
	return (length);
}
