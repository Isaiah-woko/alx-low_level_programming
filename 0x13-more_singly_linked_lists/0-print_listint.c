#include "lists.h"

/**
 * print_listint -  a function that prints
 * all the elements of a listint_t list.
 * @h: pointer to the hed of the node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}
