#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of double linked list
 * @head: double pointer to head
 * @n: value of new node
 * Return: new node pointer on success
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!n_node)
		return (NULL);

	n_node->next = NULL;
	n_node->n = n;
	if (*head == NULL)
	{
		n_node->prev = NULL;
		*head = n_node;
		return (n_node);
	}

	while (temp->next != NULL)
		temp = temp->next;

	n_node->prev = temp;
	temp->next = n_node;

	return (n_node);
}
