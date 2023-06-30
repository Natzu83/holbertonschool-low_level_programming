#include "main.h"
#include <stdio.h>

/**
 * print array - Prints elements of the array.
 * 
 */

void print_array(int *a, int n)
{
	if (a == NULL || n <= 0)
        return;

	printf("%d", a[0]);

	for (int i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}

	printf("\n");
}
