#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 * Return: Pointer to the newly allocated space in memory
 */
char *_strdup(char *str)
{
    char *duplicate;
    unsigned int len = 0;

    if (str == NULL)
        return NULL;

    while (str[len])
        len++;

    duplicate = malloc(sizeof(char) * (len + 1));
    if (duplicate == NULL)
        return NULL;

    for (unsigned int i = 0; i < len; i++)
        duplicate[i] = str[i];

    duplicate[len] = '\0';
    return duplicate;
}
