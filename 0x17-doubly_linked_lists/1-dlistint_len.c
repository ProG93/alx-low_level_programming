#include "lists.h"

/**
 * dlistint_len - prints double linked number of elements
 * @h: pointer to head node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
