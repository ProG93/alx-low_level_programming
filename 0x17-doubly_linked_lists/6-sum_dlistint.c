#include "lists.h"
/**
 * sum_dlistint - prints sum of all data of double linked lists
 * @head: pointer TO HEAD
 * Return: 0 if empty or sum of numbers
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (!head)
		return (0);

	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}

