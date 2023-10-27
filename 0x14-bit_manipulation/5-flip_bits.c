#include "main.h"

/**
 * flip_bits - This counts the number of bits to be changed
 * to move from one number to another.
 * @n: This is the first number.
 * @m: This is the second number.
 * Return: This is the number of bits to be changed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, cb = 0;
	unsigned long int c;
	unsigned long int exc = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		c = exc >> a;
		if (c & 1)
			cb++;
	}

	return (cb);
}
