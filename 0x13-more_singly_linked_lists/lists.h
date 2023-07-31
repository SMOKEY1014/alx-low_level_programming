#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdlib.h>



/* Data Structure for this project provided (singly linked list) */
typedef struct listint_s {
	int n;
	struct listint_s *next;
} listint_t;

/* Prototypes */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int sum_listint(listint_t *head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int pop_listint(listint_t **head);
void free_listint2(listint_t **head);
void free_listint(listint_t *head);
listint_t *add_nodeint_end(listint_t **head, const int n);
listint_t *add_nodeint(listint_t **head, const int n);
size_t free_listint_safe(listint_t **h);
size_t print_listint_safe(const listint_t *head);
listint_t *reverse_listint(listint_t **head);


#endif

