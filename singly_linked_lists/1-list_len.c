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
typedef struct list_t {
    int data;
    struct list_t *next;
} list_t;

size_t list_len(const list_t *h) {
    size_t count = 0;

    while (h != NULL) {
        count++;
        h = h->next;
    }

    return count;
}

