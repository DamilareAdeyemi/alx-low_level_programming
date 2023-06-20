#include "lists.h"

/**
 * get_dnodeint_at_index - Locate node in a dlistint_t list.
 * @head: head of dlistint_t list.
 * @index: node to locate.
 *
 * Return: If node doesn't exist - NULL.
 *         O/w - the address of located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
