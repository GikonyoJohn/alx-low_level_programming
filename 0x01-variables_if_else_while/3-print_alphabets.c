#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - displays all lower and upper case alphabets in ascending order
 * Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	putchar(ch);
	}
	putchar(10);
	return (0);
}
