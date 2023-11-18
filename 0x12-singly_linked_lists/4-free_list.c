#include "lists.h"

/**
 * free_list - a function for freeing a single linked list
 * @head: pointer to th ehead of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
