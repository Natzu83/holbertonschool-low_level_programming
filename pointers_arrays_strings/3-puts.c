#include "main.h"
#include <stdio.h>

/**
 * main - void _puts(char *str)
 * @*str Is the value assigned via int
 * Return: Always 0.
 */

void _puts(char *str)
{
	int *str;

	*str = "I do not fear computers.";
	_puts(str);
	return (0)
}
