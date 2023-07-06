#include "main.h"

/**
 * flip_bits - counts num_bits to change from one num to other
 * @n: first num
 * @m: second num
 * Return: num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclus = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclus >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
