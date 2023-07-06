#include "main.h"

/**
 * clear_bit - sets val of a bit to 0
 * @n: pointer to num to change
 * @index: index of bit to clear
 * [O
 * Return: 1 (success), -1 (fail)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
