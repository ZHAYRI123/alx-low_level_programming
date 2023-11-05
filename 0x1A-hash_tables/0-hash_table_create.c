#include "hash_tables.h"
/**
 * hash_table_create -  a function that creates a hash table
 * @size: input
 * Return: hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t t;

t = malloc(sizeof(hash_table_t));	
if (!t)
	return (NULL);
t->size = size;
t->array = malloc(sizeof(hash_node_t));
if (!t->array)
	return (NULL);
return (t);
}
