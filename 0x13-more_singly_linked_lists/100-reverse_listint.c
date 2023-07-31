#include "lists.h"

/**
 * reverse_listint() - This function reverses the list.
 *
 * @head: Points to the pointer to the start of the list.
 *
 * Return: returning a pointer to the head node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *cur = *head;
	listint_t *next;

	while (cur != NULL)
	{
		next = cur->next;
		cur->next = prv;

		prv = cur;
		cur = next;
	}

	*head = prv;

	return (*head);
}
