#include "main.h"
#include <stdio.h>

/**
 * main -  prints prints all aguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	__attribute__((unused)) int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
