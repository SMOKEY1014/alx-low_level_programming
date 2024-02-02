#include "hash_tables.h" /* For size_t definition*/

/**
 * key_index - Calculates the index for a given key in a hash table
 * @key: The key (string)
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	int index;

	/* Use the djb2 hash function to get the hash value for the key*/
	hash_value = hash_djb2(key);

	/* Calculate the index using the hash value and the size of the array*/
	index = hash_value % size;
	return (index);

}
