#include "main.h"
#include <stdio.h>
/**
 * create_array - creates the array
 * @size: Character to print
 * @c: Character to print
 * Return: pointer to array or null
 *
 */

char *create_array(unsigned int size, char c)
{
	char *v;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	
	v = malloc(sizeof(char) * size);

	if (v == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			v[i] = c;
		}
	}
	return (v);

}
