#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: linked list head
 * Return: null
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *ne;

	while (current != NULL)
	{
		ne = current->next;
		free(current->str);
		free(current);
		current = ne;
	}
}
