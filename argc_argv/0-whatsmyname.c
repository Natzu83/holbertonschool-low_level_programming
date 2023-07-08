#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name followed by a new line
 * @argc: Number of the command line arguments
 * @argv: Array containing the command line arguments
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
