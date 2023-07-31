#ifndef MAIN_H
#define MAIN_H



/* Data Structure for this project provided (singly linked list) */
typedef struct listint_s {
	int n;
	struct listint_s *next;
} listint_t;

/* Function to print all elements of a listint_t list */
size_t print_listint(const listint_t *h);
/* Function to count number of elements of a linked list listint_t */
size_t listint_len(const listint_t *h);


#endif

