#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - Prints all elements of a list
  * @h: A linked list
  *
  * Return: The number of nodes
  */
size_t print_list(const list_t *j)
{
	size_t count = 0;

	while (j != NULL)
	{
		if (j->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", j->len, j->str);

		j = j->next;
		count++;
	}

	return (count);
}
