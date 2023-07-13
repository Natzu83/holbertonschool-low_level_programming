#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Amount of bits of memory
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (!n)
		exit(98);
	return (n);
}
