#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end() - This function adds a new node at the end of
 * the listint_t list.
 *
 * @head: Pointer that points to the pointer of the head of the list.
 *
 * @n: this is the value to be added in the new node.
 *
 * Return: Return address of the new element/NULL if it has failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_Node = (listint_t *)malloc(sizeof(listint_t));

	if (new_Node == NULL)
	{
		return (NULL);
	}

	new_Node->n = n;
	new_Node->next = NULL;

	if (*head == NULL)
	{
	/* Make the new node the head incasethe list is empty */
		*head = new_Node;
	} else
	{
		/* Traverse or go through the list to find the last(end) node */
		listint_t *cur = *head;

		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		/* Make the end node point to the new node */
		cur->next = new_Node;
	}

	return (new_Node);
}
