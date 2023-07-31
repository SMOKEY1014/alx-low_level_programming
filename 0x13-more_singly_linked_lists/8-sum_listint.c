#include <stddef.h>
#include "lists.h"

/**
 * sum_listint() - sums all the data (n) in a listint_t linked list.
 *
 * @head: Points to the head of the list.
 *
 * Return: return sum, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
