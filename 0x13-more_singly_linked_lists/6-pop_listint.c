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
	listint_t *tempo;
	listint_t *tempo2;

	if (*head == NULL)
	{
		return (0);
	}

	tempo = *head;
	data = tempo->n;
	tempo2 = tempo->next
	free(tempo);
	tempo = tempo2; 

	return (data);
}
