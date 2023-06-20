#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return - always (0) for success
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
	printf("The last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
	puts("The last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
	 printf("The last digit of %d is %d and is 0\n", n, n % 10);
	}
	return (0);
}
