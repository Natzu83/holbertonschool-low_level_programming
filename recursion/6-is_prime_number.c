#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - The prime number getting eva
 * @n: Variable
 * 
 * Return: If the input integer is a prime number, otherwise return 0
 */
int test_prime(int n, int i)
{
	if (n < 2)
		return (0);
	else if (i >= n / 2)
		return (1);
	else if (!(n % i))
		return (0);
	return (test_prime(n, i + 1));
}
/**
 * is_prime_number - Checks for prime number
 * @n: Number being evaluated
 *
 * Return: Results from test_prime
 */
int is_prime_number(int n)
{
	return (test_prime(n, 2));
}
