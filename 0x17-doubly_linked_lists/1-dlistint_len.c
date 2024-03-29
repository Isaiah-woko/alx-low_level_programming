#include "lists.h"
/**
 * dlistint_len - a function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: the head of the list
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
