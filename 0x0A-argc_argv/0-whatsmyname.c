#include "main.h"
#include <stdio.h>

/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", *argv[0]);
	return (0);
}
