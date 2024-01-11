#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node, starting from 0.
 *
 * Return: The nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	/* Traverse the list to the desired index */
	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}

	/* Check if the desired index is within the list bounds */
	if (i == index && current != NULL)
	{
		return (current);
	}

	/* Return NULL if the node does not exist at the given index */
	return (NULL);
}
