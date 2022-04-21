#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - Show the number of elements of a list
  * @h: A linked list
  *
  * Return: The number of elements of a list
  */
size_t list_len(const list_t *j)
{
	size_t count = 0;

	while (j)
	{
		j = j->next;
		count++;
	}

	return (count);
}
