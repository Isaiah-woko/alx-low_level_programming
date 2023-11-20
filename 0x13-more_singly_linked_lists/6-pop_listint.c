#include "lists.h"

/**
 * pop_listint - a function that deletes the
 * head node of a listint_t linked list
 *
 * @head: a double pointer to the head node
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int popped_value;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp_node = *head;
		popped_value = temp_node->n;

		*head = temp_node->next;
		free(temp_node);
		temp_node = NULL;
	}

	return (popped_value);
}
