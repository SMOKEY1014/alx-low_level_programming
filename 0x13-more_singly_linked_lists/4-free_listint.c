#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - this funtion frees the listint_t list.
 *
 * @head: Pointer pointing to the beginning or head of the list to be freed.
 *
 */

void free_listint(listint_t *head)
{
	listint_t *cur;

	while (head != NULL)
	{
		cur = head->next;
		free(cur);
		head = cur;
	}
}
