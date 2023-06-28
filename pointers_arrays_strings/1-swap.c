#include "main.h"
#include <stdio.h>

/**
 * main - void swap_int(int *a, int *b);
 * swap_int is the variable to change the value
 * a is the value
 * b is the value
 * Return : Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
