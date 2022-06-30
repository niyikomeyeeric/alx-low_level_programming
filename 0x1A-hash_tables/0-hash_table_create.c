#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: - A pointer  return (NULL).
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int j;

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!(hash_table)->array)
	{
		free(hash_table);
		return (NULL);
	}

	for (j = 0; j < size; j++)
		hash_table->array[j] = NULL;

	return (hash_table);
}
