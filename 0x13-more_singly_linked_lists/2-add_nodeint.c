#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of a linked list
 * @head: double pointer to list_t
 * @n: new string value
 * Return: the address of the new element, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int *n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = (*head);
		*head = new;

		return (new);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
