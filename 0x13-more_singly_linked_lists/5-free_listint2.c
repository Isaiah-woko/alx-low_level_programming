#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: a double pointer to the head of the list
 * Return: void/ nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head != NULL)
	{
		current = *head;

		while (current != NULL)
		{
			next = current;
			current = current->next;
			free(next);
		}

	}	*head = NULL;

}
