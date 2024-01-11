#include "lists.h"

/**
 * delete_dnodeint_at_index - a function for deleting a node
 * @head: double ointer to the head node
 * @index: the index to delete the node
 * Return: 1 on success or -1 on faiilure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete_node = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = delete_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(delete_node);
		return (1);
	}
	else
	{
		while (index != 0 && delete_node != NULL)
		{
			delete_node = delete_node->next;
			index--;
		}
		if (delete_node == NULL)
		{
			return (-1);
		}
		if (delete_node->prev != NULL)
			delete_node->prev->next = delete_node->next;
		if (delete_node->next != NULL)
			delete_node->next->prev = delete_node->prev;
		free(delete_node);
		return (1);
	}
}
