include "main.h"

/**
 * set_bit - sets value of bit at a given index
 * @n: number  to search
 * @index: indexes
 *
 * Return: bit value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int r;

	if (index > 63)
		return (-1);

	r = 1 << index;
	*n = (*n | r);

	return (1);
}
