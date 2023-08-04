#include "lists.h"

/**
 * print_listint - printsssss alls of a linked list
 * @h: linked list tint_t to print
 *
 * Return: number of nodes dsjd
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}