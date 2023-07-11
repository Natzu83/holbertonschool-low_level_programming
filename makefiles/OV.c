#include <stdio.h>

int main(void)
{
	char f,l,m;
	int age;

	scanf("%c %c %c %d", &f, &l, &m, &age);
	printf("My initials are: %c%c%c and my age is %d.\n",f,l,m,age);
	return(0);
}
