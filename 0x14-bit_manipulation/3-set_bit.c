#include "main.h"

/**
 * set_bit - This sets the value of a bit to 1 at the given index.
 * @n: This is the certain number to set.
 * @index: This is the index at which to set the bit.
 * Return: It gives 1 if success, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned long int sb;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	sb = 1 << index;
	*n = *n | sb;
	return (1);
}
