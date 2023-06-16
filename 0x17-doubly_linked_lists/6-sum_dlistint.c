#include "lists.h"

/**
 * sum_dlistint - Sum of the data to the linked list
 * @head: head of the linked list
 *
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

