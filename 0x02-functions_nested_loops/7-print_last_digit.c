#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @l: number to be created
 * Return: value of last digit
 */
int print_last_digit(int l)
{
	int digit;

	digit = l % 10;
	if (digit < 0)
		digit = digit * -1;
	_putchar(digit + '0');
	return (digit);
}
