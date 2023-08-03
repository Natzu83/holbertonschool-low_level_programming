#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - Returns the  number of nodes on a list
 * @h:Linked list
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
