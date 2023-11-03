#include "hash_tables.h"

/**
  * hash_table_create - pointer to new hash table
  * @size: size of the array
  * Return: newly created hash table
  **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **array;
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_table_t) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->size = size;
	table->array = array;

	return (table);
}
