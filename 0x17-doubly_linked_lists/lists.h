#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct dlistint_s {
    int n;  /* Data of the node */
    struct dlistint_s *prev;  /* Pointer to the previous node in the list */
    struct dlistint_s *next;  /* Pointer to the next node in the list */
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

#endif