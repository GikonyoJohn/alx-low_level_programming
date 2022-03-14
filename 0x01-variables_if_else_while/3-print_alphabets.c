#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main print alphabet
 *return: 0 on success
 *get a random number
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
