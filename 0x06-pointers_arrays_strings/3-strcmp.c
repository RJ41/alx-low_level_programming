#include "main.h"
/**
 * _strcmp - compares two strings
 * s1: value
 * s2: value
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int g;
	
	while (s1[g] != '\0' && s2[g] != '\0')
	{
		if (s1[g] != s2[g])
			return (s1[g] - s2[g]);
		g++;
	}
	return (0);
}
