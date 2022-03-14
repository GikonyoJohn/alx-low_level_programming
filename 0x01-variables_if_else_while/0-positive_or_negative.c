#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - positive or negative else zero
 * get a random number and print the number
 * it is either positive, negative, or zero
 * return: 0
 */
int main(void)
{
  /**
   * variable n has been declared
   * coding then assigns the random value.
   */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
