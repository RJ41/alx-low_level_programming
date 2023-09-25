#include "main.h"
/**
 * _strpbrk - entry
 * @s: input
 * @accept: input
 * Return: 0 on succession
 */
char *_strpbrk(char *s, char *accept)
{
	int j;
	
	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
