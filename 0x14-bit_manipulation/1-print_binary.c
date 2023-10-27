#include "main.h"

/**
 * _pow - This function calculates the (base ^ power).
 * @base: The base of the exponent.
 * @power: This is the power of the exponent.
 * Return: This is ther value of the (base ^ power).
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int y;
	unsigned int x;

	y = 1;
	for (x = 1; x <= power; x++)
		y *= base;
	return (y);
}

/**
 * print_binary - This prints the  number in binary notation.
 * @n: This is the number to printed.
 * Return: void.
 */

void print_binary(unsigned long int n)

{
	unsigned long int d, c;
	char f;

	f = 0;
	d = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (d != 0)
	{
		c = n & d;
		if (c == d)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
