#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 * @int n is variable name
 * @lenght++ means it increments
 * @s++ same as lenght var
 * Return: String length
 */

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
