#include "lists.h"

/**
 * print_dlistint - printing alls elements
 * @h: head of node
 *
 * Return: elements of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
