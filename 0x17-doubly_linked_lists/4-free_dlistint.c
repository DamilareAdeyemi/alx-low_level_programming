#include "lists.h"

/**
 * free_dlistint - Free linked dlistint_t list.
 * @head: head of a dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
