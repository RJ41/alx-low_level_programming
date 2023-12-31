#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns number of elements in a linked list_t list
 * @h: list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}

	return (size);
}
