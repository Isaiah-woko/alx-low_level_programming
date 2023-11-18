#include "lists.h"

list_t *create_node(const char *str);
int _strlen(const char *str);


/**
 * _strlen - a function to check length of a string
 * @str: string to check
 * Return: the length of string
 */

int _strlen(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}


/**
 * create_node - a fnction to create a node for a single linked list
 * @str: string for the node
 * Return: the node
 */

list_t *create_node(const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_node_end - a function to add a node at the begining
 * @head: a pointer to the head pointer
 * @str: the string for the list
 * Return: address of new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = create_node(str);

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
	}

	return (new_node);
}
