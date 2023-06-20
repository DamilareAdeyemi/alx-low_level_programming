#include "lists.h"

/**
 * add_dnodeint - Add new node at the beginning of a dlistint_t list.
 * @head: ptr to head of dlistint_t list.
 * @n: int for new node to contain.
 *
 * Return: If function fails - NULL.
 *         O/w address of new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
