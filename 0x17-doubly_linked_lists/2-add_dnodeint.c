#include "lists.h"
/**
 * add_dnodeint -  function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: pointer to the head of the list
 * @n: the integer in the list
 * Return: the address of the new element or NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
	}
	*head = new_node;

	return (new_node);
}
