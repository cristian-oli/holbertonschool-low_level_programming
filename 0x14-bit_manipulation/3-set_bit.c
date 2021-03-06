#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: the number
 * @index: position to set
 * Return:1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = 64;
	unsigned long int tmp;

	if (index <= bits)
	{
		tmp = 1 << index;
		*n = *n | tmp;
		return (1);
	}
	return (-1);
}
