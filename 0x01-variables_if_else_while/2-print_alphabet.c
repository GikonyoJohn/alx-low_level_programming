#include <stdio.h>
#include <stdlib.h>
/**
 *main print alphabet
 *return: 0 on success
 *
*/

int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);

}
