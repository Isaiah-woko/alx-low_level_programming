#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 *
 * @head: pointer to head of list
 * Return: sum of all data in list
 */

int sum_listint(listint_t *head)
{
	listint_t *current_node = head;
	int sum = 0;

	if (current_node == NULL)
	{
		return (0);
	}
	else
	{
		while (current_node != NULL)
		{
			sum = sum + current_node->n;
			current_node = current_node->next;
		}
	}

	return (sum);

}
