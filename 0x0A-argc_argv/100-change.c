#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum coins to make change for a fee
 * @argc: number of arguments
 * @argv: number of arrays
 * Return: 0 on success, 1 if error
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else
			if (cents >= 10)
				cents -= 10;
			else
				if (cents >= 5)
					cents -= 5;
				else
					if (cents >= 2)
						cents -= 2;
					else
						cents--;
		coins++;
	}

	printf("%d\n", coins);

	return (0);
}
