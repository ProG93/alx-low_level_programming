#include "lists.h"

/**
 * get_dnodeint_at_index - returns number of double linked list
 * @head: pointer to head
 * @index: node index
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num;
	dlistint_t *node = head;

	for (num = 0; node && num < index; num++)
		node = node->next;

	if (num != index)
		return (NULL);
	return (node);
}
