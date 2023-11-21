#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: a doble pointer to head of the list
 * Return: pointer to the first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	*head = prev_node;
	return (*head);
}
