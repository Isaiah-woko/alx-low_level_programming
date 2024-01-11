#include "lists.h"

dlistint_t *insert_node(dlistint_t *current,
						unsigned int idx, dlistint_t *new_node);


/**
 * insert_dnodeint_at_index - Insert a new node at a given position in a
 * doubly linked list.
 * @h: A double pointer to the head of the list.
 * @idx: The index where the new node should be inserted.
 * @n: The data (integer) to be stored in the new node.
 * Return: The address of the new node, or NULL if it fails.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	idx--;
	current = insert_node(current, idx, new_node);
	return (new_node);
}



/**
 * insert_node - function for inserting the node
 * @current: the current node
 * @idx: the index to inser the node
 * @new_node: the node to insert
 * Return: the new node
*/

dlistint_t *insert_node(dlistint_t *current,
						unsigned int idx, dlistint_t *new_node)
{
	while (idx != 0 && current != NULL)
	{
		current = current->next;
		idx--;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;
	return (new_node);
}
