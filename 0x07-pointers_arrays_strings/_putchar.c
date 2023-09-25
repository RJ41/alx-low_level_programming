#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 1 if successful
 * Return: -1 if error, and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
