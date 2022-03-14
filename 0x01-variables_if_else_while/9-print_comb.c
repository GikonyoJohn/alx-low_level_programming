#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - writes 0-9
 *
 * Description: Writes 0-9 with comma and space
 *
 * Return: 0 for success
*/
int main(void)
{
	int num = 72;

	while (num < 82)
	{
		putchar(num);
		if (num < 81)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
