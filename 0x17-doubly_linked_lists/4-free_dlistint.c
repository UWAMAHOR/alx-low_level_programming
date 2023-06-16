#include "lists.h"

/**
 * free_dlistint - Frees the linked lists
 * @head: head of the node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
