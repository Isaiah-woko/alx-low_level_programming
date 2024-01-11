#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns
 *  the nth node of a dlistint_t linked list.
 *
 * @head: pointer to the beginning of the list
 * @index: the node to return
 * Return: the node or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int main_index = 0;

	while (current_node != NULL)
	{
		if (main_index == index)
		{
			return (current_node);
		}
		current_node = current_node->next;
		main_index++;
	}

	return (NULL);
}
