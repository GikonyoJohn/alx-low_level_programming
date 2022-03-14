#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * Prints alphabet
 *
 * Description: Prints the alphabet in reverse order
 * Can only use putchar
 *
 * Return: 0 for success
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
