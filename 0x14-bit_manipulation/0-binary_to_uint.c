#include "main.h"
#include <string.h>



/**
 * binary_to_uint - convert binary into unsigned int
 * @b: string combined binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0, i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		a = a * 2 + (b[i] == '1' ? : 0);

	}
	return (a);
}

