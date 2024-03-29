#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));

	/* Check if memory allocation was successful */
	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if memory allocation failed */
	}

	/* Set the data for the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, set the new node as the head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* Find the last node in the list */
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/* Update pointers to insert the new node at the end */
	temp->next = new_node;
	new_node->prev = temp;

	/* Return the address of the new element */
	return (new_node);
}

