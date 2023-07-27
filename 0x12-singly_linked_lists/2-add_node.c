#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - It adds a new node at the start of a linked list
 * @head: The pointer to a pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: Returns the address of the newer element, or NULL if it unsuccessful.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->length = length;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
