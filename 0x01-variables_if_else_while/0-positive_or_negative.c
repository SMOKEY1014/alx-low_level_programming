#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
* Positive anything is better than negative nothing Task
*/
/*
* main - Entry point
* Return - Always return(0) for success.
*/

int main(void)
{
	int n;
	srand(time(0));



	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n");
	}
	else
	{
		if (n < 0)
		{
			printf("%d is negetive\n");
		}
		else
		{
			printf("%d is zero\n");
		}
	}
	return (0);
}
