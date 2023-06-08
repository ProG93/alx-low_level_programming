#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: returns a pointer to created tables
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (size == 0)
		return (NULL);

	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = maloc(sizeof(hash_node_t *) * size);

	if (new_table-> == NULL)
		return(NULL);

	return (new_table);
}
