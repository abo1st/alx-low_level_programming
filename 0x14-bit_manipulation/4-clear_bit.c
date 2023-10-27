#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - This sets the value of a bit to 0 at a given certain index.
 * @n: The parameter.
 * @index: The index.
 * Return: It gives 1 if success, -1 if error.
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
