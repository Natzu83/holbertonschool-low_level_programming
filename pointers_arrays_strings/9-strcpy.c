#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copy the string
 * @dest: Return the value to the pointer
 * @src: Include the statment of the null byte
 * 
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
