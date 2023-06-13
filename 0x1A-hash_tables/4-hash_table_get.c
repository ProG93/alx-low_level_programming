#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value
 * @ht: hash table
 * @key: key to find
 * Return: value associated element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i, index;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->arrat[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			return (ht->array[i]->value);
	}
	return (NULL);
}
