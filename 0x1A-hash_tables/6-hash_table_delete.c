#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	/* Loop through each index of the hash table array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		/* Traverse the linked list and free each node */
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}

	/* Free the array and the hash table structure itself */
	free(ht->array);
	free(ht);
}
