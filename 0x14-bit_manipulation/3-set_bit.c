
#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index 
 * @n: number
 * @index: The index to set the value 
 *
 * Return: bit value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
