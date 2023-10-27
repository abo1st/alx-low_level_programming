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
	unsigned long int p, q, r, s, t;

	q = p = r = 0;
	t = n;
	s = m;
	while (n > 0)
	{
		n = n >> 1;
		q++;
	}
	while (m > 0)
	{
		m = m >> 1;
		p++;
	}
	m = s;
	n = t;
	if (p > q)
	{
		while (p > 0)
		{
			if ((m & 1) != (n & 1))
				r += 1;
			m = m >> 1;
			n = n >> 1;
			p--;
		}
	}
	else
	{
		while (q > 0)
		{
			if ((m & 1) != (n & 1))
				r += 1;
			m = m >> 1;
			n = n >> 1;
			q--;
		}
	}
	return (r);
}
