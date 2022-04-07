#include "main.h"
#include <stdlib.h>

/**
 * main - print the multiplication of 2 numbers.
 * argc: array length.
 * @argv: array.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, c, len1, len2, lenres;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *tabres;

	if (argc != 3 || _isNumber(argv[1]) == 1 || _isNumber(argv[2]) == 1)
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(E[i]);
		}
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
	;
	for (len2 = 0; argv[2][len2]; len2++)
	;
	lenres = len1 + len2;
	tabres = _calloc(lenres, sizeof(int));
	if (tabres == NULL)
	{
		free(tabres);
		return (0);
	}
	for (i = len2 - 1, c = 0; i >= 0; i--)
	{
	tabres = mul_array(argv[1], len1, argv[2][i], tabres, (lenres - 1 - c));
	c++;
	}
	print_array(tabres, lenres);
	free(tabres);
	exit(EXIT_SUCCESS);
	return (0);
}
