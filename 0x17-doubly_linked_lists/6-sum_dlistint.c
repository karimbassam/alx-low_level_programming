#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all the data in the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* Traverse the list and accumulate the sum */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	/* Return the sum */
	return sum;
}
