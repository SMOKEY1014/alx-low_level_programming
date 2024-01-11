#include "lists.h"


/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp_node;
	/* Create a new node */
	new_node = malloc(sizeof(struct dlistint_s));

	if (new_node == NULL)
	{
		/* Memory allocation failed */
		return (NULL);
	}

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, set the new node as the head */
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}

	/* Traverse the list to find the last node */
	temp_node = *head;
	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}

	/* Add the new node to the end of the list */
	new_node->next = NULL;
	new_node->prev = temp_node;
	temp_node->next = new_node;

	return (new_node);
}
