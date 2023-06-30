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
        int n  = 0;

        while (str[n] != '\0')
        {
		i++;
        }
	int half = n / 2;
	
	for (n = 0; n < half; n++)
	{
		putchar(str[n]);
	}

        putchar('\n');
}

