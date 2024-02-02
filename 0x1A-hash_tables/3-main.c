#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "hetairas", "cool");
	hash_table_set(ht, "mentioner", "cold");
	hash_table_set(ht, "smokey", "hot");
	hash_table_set(ht, "hey", "numb");
	hash_table_print(ht);
	return (EXIT_SUCCESS);
}
