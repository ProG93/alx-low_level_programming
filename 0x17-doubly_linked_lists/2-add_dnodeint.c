#include "lists.h"

/**
 * add_dnodeint - prints the added new nodes
 * @head: double pointer to head
 * @n: number of new nodes
 * Return: added number of new nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));

	if (!n_node)
		return (NULL);

	n_node->prev = NULL;
	n_node->next = *head;
	n_node->n = n;
	if (*head != NULL)
		(*head)->prev = n_node;
	*head = n_node;

	return (n_node);
}
