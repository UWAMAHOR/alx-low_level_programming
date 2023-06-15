/**
 * print_dlistint - printing all  the 9`elements
 * @h: head of node
 *
 * Return: elements of a linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int a = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}

