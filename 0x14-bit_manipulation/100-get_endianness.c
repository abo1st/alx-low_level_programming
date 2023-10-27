#include "main.h"

/**
 * get_endianness - This checks the endianness.
 * Return: Gives 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	int y;
	char *z;

	y = 1;
	z = (char *)&y;
	return (*z);
}
