#include "lists.h"

/**
 * print_dlistint - Print all element of dlistint_t list.
 * @h: head of dlistint_t list.
 *
 * Return: The num of nodes in list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
