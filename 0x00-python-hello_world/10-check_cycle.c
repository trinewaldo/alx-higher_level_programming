#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked myList contains a cycle.
 * @myList: A singly-linked myList.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */
int check_cycle(listint_t *myList)
{
	listint_t *nairobi, *mombasa;

	if (myList == NULL || myList->next == NULL)
		return (0);

	nairobi = myList->next;
	mombasa = myList->next->next;

	while (nairobi && mombasa && mombasa->next)
	{
		if (nairobi == mombasa)
			return (1);

		nairobi = nairobi->next;
		mombasa = mombasa->next->next;
	}

	return (0);
}
