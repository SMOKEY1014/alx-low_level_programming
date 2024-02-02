#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;

	hash = 5381;
	while (*str != '\0')
	{
		hash = (hash * 32 + hash) + *str;/* hash * 33 + c  */
		str++;
	}
	return (hash);
}
