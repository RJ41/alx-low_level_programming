#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int length = 0;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	while (str && str[length])
		length++;

	node->len = length;
	node->str = strdup(str);
	node->next = *head;
	*head = node;

	return (node);
}
