#include "main.h"

/**
 * clear-bit - sets val of bit to 0
 * @n: pointer to num to chnge
 * @index: index of bit to clear
 * Return: 1 = Success, -1 = fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
