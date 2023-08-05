#include "lists.h"
/**
 * dlistint_len - Return the number of elements in dll
 * @h: Pointer to the struct of ddl
 * Return: Amount of elements in dll
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count_node = 0;

	while (h != NULL)
	{
		h = h->next;
		count_node++;
	}
	return (count_node);
}
