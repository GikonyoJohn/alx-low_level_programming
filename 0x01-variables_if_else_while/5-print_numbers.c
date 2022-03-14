#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints single digit number of base 10 
 *
 * Description: Prints numbers from 0 to 9
 *
 * Return: 0 for success
*/
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
