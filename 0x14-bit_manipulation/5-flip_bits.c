#include "main.h"

/**
 * flipbits - counts number of bits to change from 1 to other
 * @n: first num
 * @m: 2nd num
 * Return: num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusv = n ^m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusv >> i;
		if (current & 1)
			count i++;
	}

	return (count);
}
