#include "lists.h"

/**
 * listint_len - returns the number of ele
 * @h: linked list of type listintaverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
