#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * list_len - Returns the  number of nodes on a list
 * @h:Linked list
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
