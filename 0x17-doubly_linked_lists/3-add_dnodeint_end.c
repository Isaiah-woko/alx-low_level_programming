#include "lists.h"
/**
 * add_dnodeint_end -  a function that adds a new node
 * at the end of a dlistint_t list.
 * @head: a pointer to the head of the list
 * @n: the integer
 * Return: the address of the new element, or NULL if failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head != NULL)
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
	}
	else
	{
		*head = new_node;
		new_node->prev = NULL;
	}

	return (new_node);
}
