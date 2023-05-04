#include "main.h"

/**
 * print_binary - binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar('0' + (n & 1));
}

6.100-get_endianness.c

#include "main.h"

/**
 *  get_endianness - checks the endianness.
 *  Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
