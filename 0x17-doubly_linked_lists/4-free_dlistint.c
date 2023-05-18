#include "lists.h"

/**
 * free_dlistint - free double linked list
 * @head: double pointer to head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *current = head;

	while (temp)
	{
		temp = temp->next;
		free(current);
		current = temp;
	}
}
