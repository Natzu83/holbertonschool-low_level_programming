#ifndef _S_LINK_LISTS_
#define _S_LINK_LISTS_
#include <stddef.h>

/**
 * struct dlistint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
void free_dlistint2(dlistint_t **head);
int pop_dlistint(dlistint_t **head);
dlistint_t *get_nodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_nodeint_at_index(dlistint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(dlistint_t **head, unsigned int index);
dlistint_t *reverse_dlistint(dlistint_t **head);

#endif
