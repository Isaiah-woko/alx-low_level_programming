#include "lists.h"

/**
 * list_len -  a function that returns the number of elements
 * in a linked list_t list.
 * @h: a pointer of type list_t to tghe head of a linked list
 * Return: the number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
