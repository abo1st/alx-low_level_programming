#include "main.h"

/**
 * binary_to_uint - This function converts a binary number to an unsigned int.
 * @b: This is the pointer to a string containing a binary num.
 * Return: The unsigned int with decimal value of binary number, or 0 if error.
 */

unsigned int binary_to_uint(const char *b)

{
	int x;
	unsigned int y;

	y = 0;
	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		y <<= 1;
		if (b[x] == '1')
			y += 1;
	}
	return (y);
}
