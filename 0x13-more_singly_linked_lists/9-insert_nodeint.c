#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - this function inserts a new node
 * at a position given in a list.
 *
 * @head: Points to the pointer (**) to the head of the list.
 *
 * @idx: Position for the new node(Index), starting at 0.
 *
 * @n: The value to be added in the new node.
 *
 * Return: Address of the new node, or NULL if it has failed.
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_Node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *cur;
	unsigned int cnt = 0;

	if (new_Node == NULL)
	{
		return (NULL);
	}

	new_Node->n = n;

	new_Node->next = NULL;

	if (idx == 0)
	{
		new_Node->next = *head;
		*head = new_Node;
		return (new_Node);
	}

	else
	{
		cur = *head;

		while (cur && cnt < (idx - 1))
		{
			cur = cur->next;
			cnt++;
		}

		if (cur == NULL)
		{
			free(new_Node);
			return (NULL);
		}

		new_Node->next = cur->next;
		cur->next = new_Node;
	}
	return (new_Node);
}

