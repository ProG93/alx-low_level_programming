#include "lists.h"

/**
* listint_len - a function that returns the number of elements in a
* @h: a linked list
* Return: returns the number of elements in h
*/
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
