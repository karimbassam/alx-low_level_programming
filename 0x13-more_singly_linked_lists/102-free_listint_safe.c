#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list, handles loops
 * @h: Pointer to the pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t node_count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		temp = current->next;

		free(current);

		node_count++;

		current = temp;

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (node_count);
}
