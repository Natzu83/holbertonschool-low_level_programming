#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* The function of this code is that everytime a random number is asigned to the value n. It will know how to make it negative, positive or that is equal.*/

   int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if(n > 0)
	{
		printf("%d is a positive number\n", n);
	}
	else if(n < 0)
	{
        printf("%d is a negative number\n", n);
	}
	else if (n == 0) 
	{
        printf("%d is zero\n", n);
	}

	return (0);
}
