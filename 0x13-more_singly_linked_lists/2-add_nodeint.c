#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - it Adds the new node at the head of a listint_t list.
 *
 * @head : Pointer that points to the pointer to the beginning of the list.
 *
 * @n : Value to be added in the new node.
 *
 * Return: we return the address of the new element, or NULL if it has failed.
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_Node;

	new_Node = malloc(sizeof(listint_t));

	if (!new_Node)
	{
		return (NULL);
	}

	/* we are assigning the value to the new node */
	new_Node->n = n;

	/* we are making the new node point to the current head */
	new_Node->next = *head;

	/* Updating head to point to the newNode */
	*head = new_Node;

	return (new_Node);
}
