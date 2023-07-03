#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * -strpbrk - Function that locates the first occurrence in the string
 *  @accept: Need to matches its bytes
 *  @s: To the pointer
 *  Return: void
 */
char *s_strpbrk(char *s, char *accept)
{
	int s;
	int j;

	for (i = 0; s[i]; ++1)
	{
		for(j = 0; accept[j]; ++j)
		{
			if(s[i] == accept[j])
				return (s +1);
		}
	}
	return (0);
}
