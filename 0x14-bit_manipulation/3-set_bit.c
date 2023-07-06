#include "main.h"

/**
 * set_bit - sets bit at id index to 1
 * @n: pointer to num to chnge
 * @index: index of bit to set to 1
 * Return: 1 (success), -1 (fail)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
