#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Alloates memory using malloc
 * @b:How much bits to use
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
  void *ptr;

  ptr = malloc(b);
  if (ptr == NULL)
    exit(98);
  return (ptr);
}
