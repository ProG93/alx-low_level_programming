#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of a linked list
 * @head: double pointer to list_t
 * @n: new string value
 * Return: the address of the new element, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const char *n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
