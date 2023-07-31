#include <stdlib.h>
#include "main.h"

/**
 * free_listint2() - this function sets the head to NULL and frees a listint_t list.
 *
 * @head: Points to the head of list to be freed.
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *cur;

	while (*head != NULL)
	{
		cur = *head;
		*head = (*head)->next;
		free(cur);
	}
}
