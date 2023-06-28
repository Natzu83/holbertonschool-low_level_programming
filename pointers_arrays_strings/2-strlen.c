#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - int _strlen(char *s)
 * @int n is variable name
 * @lenght++ means it increments
 * @s++ same as lenght var
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int n = 0;
	while (*s != '\0')
	{
		n++;
		s++;
	}

	return n;
}

