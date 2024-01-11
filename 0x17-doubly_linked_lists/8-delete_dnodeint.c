#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	/* Check if the list is empty */
	if (*head == NULL)
		return (-1);

	/* Special case: delete the first node */
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse the list to the desired index */
	current = *head;
	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	/* Check if the desired index is within the list bounds */
	if (i == index && current != NULL)
	{
		temp = current;
		current->prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;
		free(temp);
		return (1);
	}

	/* Return -1 if it is not possible to delete the node at the given index */
	return (-1);
}
