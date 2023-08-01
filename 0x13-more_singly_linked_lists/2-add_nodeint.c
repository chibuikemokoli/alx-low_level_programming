#include "lists.h"

/**
 * add_nodeint - adds a new nofniudnvidnfifg
 * @head: pointer to the first nodist
 * @n: data to insert in that node
 *
 * Return: pointer tvnrngnode, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
