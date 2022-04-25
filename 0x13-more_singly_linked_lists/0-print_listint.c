#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *j;
	unsigned int cntr = 0;

	j = h;
	while (j)
	{
		printf("%d\n", j->n);
		cntr++;
		j = j->next;
	}
	return (cntr);
}
