#include "main.h"

/**
 * _strchr - locates a character in string
 * @src: source string
 * @c: character to search 
 * Return: *src
*/

char *_strchr(char *src, char c)
{
	while (*src != '\0')
	{
		if (*src == c)
		{
			return (src);
		}
		src++;
	}
	if (*src == c)
	{
		return (src);
	}
return (0);
}
