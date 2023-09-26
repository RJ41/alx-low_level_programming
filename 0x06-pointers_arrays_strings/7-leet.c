#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: value
 * Return: 0
 */
char *leet(char *s)
{
	int j, k;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "44330077111";
	
	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; k < 10; k++)
		{
			if (s[j] == letters[k])
			{
				s[j] = numbers[k];
			}
		}
	}
	return (s);
}
