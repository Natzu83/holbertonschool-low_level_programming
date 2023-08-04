#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_list - Frees the linked list
 * @head: Beginning of the list
 * Return: Free
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
