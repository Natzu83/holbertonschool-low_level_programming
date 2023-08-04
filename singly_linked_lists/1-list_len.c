#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * list_len - Show the number of elements in the list
 * @h: Linked list
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *h)
{
	int  count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
