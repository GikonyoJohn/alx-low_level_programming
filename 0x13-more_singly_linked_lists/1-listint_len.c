#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: The head of the linked list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *j;
	unsigned int cnr = 0;

	j = h;
	while (j)
	{
		cnr++;
		j = j->next;
	}
	return (cnr);
}
