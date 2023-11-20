#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: a pointer to the head of the list
 * Returrn: void/ nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
