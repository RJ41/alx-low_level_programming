#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of list
 * @str: string to be duplicated
 * Return: new element address, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *this_node;
	unsigned int length = 0;

	while (str && str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	this_node = *head;
	while (this_node->next != NULL)
		this_node = this_node->next;

	this_node->next = new_node;

	return (new_node);
}
