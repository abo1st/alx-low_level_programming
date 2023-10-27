#include"main.h"

/**
 * get_bit - This returns the value of a bit at the given index.
 * @n: This is the number to check bits in.
 * @index: This is the index at which to check the bit.
 * Return: This is the value of the bit, or -1 if there is an error.
 */

int get_bit(unsigned long int n, unsigned int index)

{
	unsigned long int d, c;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	c = n & d;
	if (c == d)
		return (1);
	return (0);
}
