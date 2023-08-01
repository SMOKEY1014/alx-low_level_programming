#include <stddef.h>
#include "lists.h"
/**
 * free_listint_safe - Function for freeing a listint_t linked list.
 * @h: (**)ptr to ptr to the head of the list.
 * Return: returns size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *s, *f, *tempo;
	size_t cnt = 0;

	if (h == NULL || *h == NULL)
		return (0);
	s = *h;
	f = *h;
	while (s != NULL && f != NULL && f->next != NULL)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
		{
			s = *h;
			while (s != f)
			{
				tempo = f;
				f = f->next;
				free(tempo);
				cnt++;
			}
			while (f->next != s)
			{
				tempo = f;
				f = f->next;
				free(tempo);
				cnt++;
			}
			tempo = f;
			f = f->next;
			free(tempo);
			cnt++;
			*h = NULL;
			return (cnt);
		}
	}
	while (*h != NULL)
	{
		tempo = *h;
		*h = (*h)->next;
		free(tempo);
		cnt++;
	}
	return (cnt);
}

