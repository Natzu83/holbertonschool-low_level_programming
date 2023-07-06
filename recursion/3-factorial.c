#include "main.h"
#include <stdio.h>

/**
 * factorial - The factorial
 * @n: The variable
 *
 * Retrurn: Factorial of number, -1 if negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (!n)
		return (1);
	return (n * factorial(n - 1));
}
