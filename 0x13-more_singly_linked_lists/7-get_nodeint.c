#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list.
 *
 * @head: pointer to the head of tyhe list
 * @index: the indexing of the nodes
 * Return: the nth node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int current_index = 0;

	while (current_node != NULL)
	{
		if (current_index == index)
		{
			return (current_node);
		}

		current_node = current_node->next;
		current_index++;
	}

	return (NULL);
}
