#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));

	/* Check if memory allocation was successful */
	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if memory allocation failed */
	}

	/* Set the data for the new node */
	new_node->n = n;
	new_node->prev = NULL;
	/* If the list isn't empty,update the previous pointer of the current head */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	/* Set the next pointer of the new node to the current head */
	new_node->next = *head;

	/* Update the head to point to the new node */
	*head = new_node;

	/* Return the address of the new element */
	return (new_node);
}
