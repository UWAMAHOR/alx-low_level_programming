#include "main.h"

/**
 * get_bit - returns value of bit at any index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return:value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a;

	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	if (index == 0)
	{
		a = n & 1;
		return (a);
	}
	a = get_bit(n >> 1, index - 1);
	return (a);
}
