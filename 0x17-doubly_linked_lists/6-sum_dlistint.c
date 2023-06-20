#include "lists.h"

/**
 * sum_dlistint - sum all data of dlistint_t list.
 * @head: head of dlistint_t list.
 *
 * Return: sum all data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
