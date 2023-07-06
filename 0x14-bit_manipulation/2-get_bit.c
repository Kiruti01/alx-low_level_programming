#include "main.h"

/**
 * get_bit - returns value of bit at index in decimal num
 * @n: num to search
 * @index: index of bit
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitval;

	if (index > 63)
		return (-1);

	bitval = (n >> index) & 1;

	return (bitval);
}
