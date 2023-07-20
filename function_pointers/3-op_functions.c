#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - Operation sum
  * @a: variables
  * @b: variables
  *
  * Return: Free
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Operation substraction
  * @a: Variables
  * @b: Variables
  *
  * Return: Freestyle
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Operation Multiplication
  * @a: variables
  * @b: variables
  *
  * Return: Freestyle
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Operation divide
  * @a: variables
  * @b: variables
  *
  * Return: Freestyle
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - Operation modify
  * @a: variables
  * @b: variables
  *
  * Return: Freestyle
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
