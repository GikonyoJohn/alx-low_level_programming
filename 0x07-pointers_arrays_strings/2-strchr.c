#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: source string
 * @c: character to search 
 * Return: *s
*/

char *_strchr(char *s, char c)
{
	int i;

	if (src == 0)
	{
		return (0);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

	}

	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (0);
}
