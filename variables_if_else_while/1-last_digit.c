#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main- Program will print the digital number stored in the n var.
 * Return: always 0 
 * */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if(n > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	else if(n == 0)
	{
		printf("%d is 0\n", n);
	}
	else(n < 6 && !0)
	{
		printf("%d\n &&  and is less than 6 and not 0\n", n);
	}
	
	return (0);
}
