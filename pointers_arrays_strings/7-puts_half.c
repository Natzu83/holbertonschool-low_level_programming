#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of the string
 * @str: String to be treated
 *
 * Return: void
 */

void puts_half(char *str)
{
        int i = 0;

        while (str[i] != '\0')
        {
		i++;
        }
	int half = i / 2;
	
	for (i = 0; i < half; i++)
	{
		putchar(str[i]);
	}

        putchar('\n');
}

