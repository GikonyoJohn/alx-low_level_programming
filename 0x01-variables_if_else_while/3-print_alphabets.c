#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints alphabet
 * Description: Prints the alphabet in lower and upper case
 * followed by new line
 * Return: 0 for success
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
