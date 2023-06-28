#include "main.h"
#include <stdio.h>

/**
 * main - void swap_int(int *a, int *b);
 *
 * Return : Always 0.
 */

void swap_int(int *a, int *b)
{
	*a = 98;
	*b = 48;
}

int main( void)
{
	int x = 10, y = 20;
	updateValue(&x, &y);

	return (0);
}
