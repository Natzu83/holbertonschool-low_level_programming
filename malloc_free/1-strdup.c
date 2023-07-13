#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns pointer to newly allocated space that contains a string
 * @str: String copy
 *
 * Return: Pointer to new string
 */
char *_strdup(char *str)
{
	char *s;
	int i, len;

	i = 0;
	if (!str)
		return (NULL);
	while (*(str + i))
		++i;
	len = i;
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	for (i = 0; i <= len; ++i)
		*(s + i) = *(str + i);
	return (s);
}
