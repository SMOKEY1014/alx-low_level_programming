#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe() - the funtion prints a list.
 *
 * @head: Points to the head of the list.
 *
 * Return: Outputs the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *s, *f;
	size_t cnt = 0;

	s = head;
	f = head;

	while (s != NULL && f != NULL && f->next != NULL)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		s = s->next;
		f = f->next->next;

		if (s == f)
		{
			printf("-> [%p] %d\n", (void *)s, s->n);
			exit(98);
		}

		cnt++;
	}

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		cnt++;
	}

	return (cnt);
}

