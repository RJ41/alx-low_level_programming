#include "main.h"
#include <stdio.h>

/**
 * main -  prints number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}