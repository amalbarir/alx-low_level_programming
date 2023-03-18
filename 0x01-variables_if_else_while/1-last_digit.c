#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * description : 'last digit of the number stored in the variable n'
 * Return : Always 0 (success)
 */
int main(void)
{
	int n;
	int store;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (store > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, store);
	else if (store == 0)
		printf("Last digit of %d is %d and is 0\n", n, store);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, store);

	return (0);
}
