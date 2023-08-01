#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - this function deletes the head node of list.
 *
 * @head: points to the head of the list.
 *
 * Return: Return the requested data (n) of the deleted head node,
 * else 0 if the list is empty.
 *
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temporary;


	if (*head == NULL)
	{
		return (0);
	}

	temporary = *head;
	data = temporary->n;
	*head = temporary->next;
	free(temporary);

	return (data);
}
