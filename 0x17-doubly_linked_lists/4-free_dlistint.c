#include "lists.h"
/**
 * free_dlistint - a function for freeing the list
 * @head: the head of the list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
