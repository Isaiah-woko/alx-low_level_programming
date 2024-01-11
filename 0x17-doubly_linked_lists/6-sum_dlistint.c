#include "lists.h"
/**
 * sum_dlistint -  a function that returns the sum of
 * all the data (n) of a dlistint_t linked list.
 * @head: the head of the list
 * Return: the sum
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (current == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
