#include <stdlib.h>
#include <time.h>
/Make it positive but make it negative/

/* The function of this code is that everytime a random number is asigned to the value n. It will know how to make it negative, positive or that is equa./
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n<0)
		printf("%d\n ,n);
	else(n>0)
		printf("%d\n, n);
	else(n==0)
		printf("%d\n, n);
	return (0);
}
