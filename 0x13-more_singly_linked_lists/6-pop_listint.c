#include <stdlib.h>
#include "main.h"

/**
 * pop_listint() - this function deletes the head node of list.
 *
 * @head: points to the head of the list.
 *
 * Return: Return the requested data (n) of the deleted head node, else 0 if the list is empty.
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

	data = (*head)->n;
	*temporary = *head;
	*head = (*head)->next;
	free(temporary);

	return (data);
}
