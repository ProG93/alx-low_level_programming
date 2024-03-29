#include "lists.h"

/**
 * print_dlistint - prints all elements of double lists
 * @h: pointer to head node
 * Return: Number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
