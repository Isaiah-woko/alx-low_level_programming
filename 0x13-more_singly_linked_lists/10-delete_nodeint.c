#include "lists.h"

/**
 * delete_nodeint_at_index - a  function that deletes the node
 * at index index of a listint_t linked list.
 *
 * @head: a pointer pointing to the head pointer
 * @index: the index of the node to be deletd
 * Return: 1 if successful or 1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del_node = *head;
	listint_t *previous = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = del_node->next;
		free(del_node);
		del_node = NULL;
		return (1);
	}
	else
	{
		while (index != 0 && del_node != NULL)
		{
			previous = del_node;
			del_node = del_node->next;
			index--;
		}

		if (del_node == NULL)
		{
			return (-1);
		}

		previous->next = del_node->next;
		free(del_node);
		del_node = NULL;
		return (1);
	}
}
