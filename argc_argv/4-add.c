#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Adds positive numbers
 * @argc: Number of command line arguments
 * @argv: Array containing command line arguments
 *
 * Return: 0, 1 if non-digits are passed
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
int main(int argc, char *argv[])
{
	int i, number, sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	
	for (i = 1; i < argc; i++)
	{
		int j = 0;
		while (argv[i][j] != '\0')
	}
	if (!is_digit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		number = atoi(argv[i]);
		sum += number;
	}
	printf("%d\n", sum);
	return 0;
}
