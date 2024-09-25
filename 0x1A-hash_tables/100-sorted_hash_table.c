#include "hash_tables.h"

/**
 * insert_sorted_node - Inserts a node into the sorted linked list.
 * @ht: The sorted hash table.
 * @new_node: The new node to be inserted.
 */
void insert_sorted_node(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current;

	if (ht->shead == NULL) /* First element */
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
		return;
	}

	current = ht->shead;
	while (current && strcmp(new_node->key, current->key) > 0)
		current = current->snext;

	if (current == ht->shead) /* Insert at the beginning */
	{
		new_node->snext = ht->shead;
		new_node->sprev = NULL;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else if (current == NULL) /* Insert at the end */
	{
		new_node->sprev = ht->stail;
		new_node->snext = NULL;
		ht->stail->snext = new_node;
		ht->stail = new_node;
	}
	else /* Insert in the middle */
	{
		new_node->sprev = current->sprev;
		new_node->snext = current;
		current->sprev->snext = new_node;
		current->sprev = new_node;
	}
}
