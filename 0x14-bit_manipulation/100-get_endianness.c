#include "main.h"

/**
 * get_endianness - This checks the endianness.
 * Return: Gives 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	int yy;
	char *zz;

	yy = 1;
	zz = (char *)&yy;
	return (*zz);
}
