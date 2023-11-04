#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks if string is positive
 * @s: string
 * Return: 1 is positive, 0 if otherwise
 */

int is_positive_number(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 for error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
