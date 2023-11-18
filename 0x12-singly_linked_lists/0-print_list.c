#include "lists.h"

/**
 * print_list - a function to prints all elements of a singlr linked list
 * @h: a pointer to the headof the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		count++;
		current = current->next;
	}

	return (count);
}
