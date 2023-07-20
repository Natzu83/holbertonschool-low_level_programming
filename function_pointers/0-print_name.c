#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print the name
 * @name: Name of the person
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	printf("Hello %s\n", name);
}
int main()
{
	void (*nick)(char*);
	nick = print_name;
	nick("Omar");
}
