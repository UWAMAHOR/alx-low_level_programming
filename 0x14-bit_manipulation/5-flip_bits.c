#include "main.h"

/**
  * flip_bits -   the number of bits you would need to flip
  * @n: number to flip
  * @m: unsigned long int set.
  * Return: flipped bits
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip_n = 0, count = 0;

	flip_n = n ^ m;
	while (flip_n)
	{
		if (flip_n & 1)
			count++;

		flip_n >>= 1;
	}

	return (count);
}
