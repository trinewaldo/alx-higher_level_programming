#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
}
intList;

size_t print_listint(const intList *h);
intList *add_nodeint(intList **head, const int n);
void free_listint(intList *head);
int check_cycle(intList *list);

#endif /* LISTS_H */
