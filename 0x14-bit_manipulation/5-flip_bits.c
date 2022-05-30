#include "main.h"

/**
 * flip_bits - A function that gets number of bits needed to flip
 * @n: How many bit flips are needed to equal m for n
 * @m: The number to set other equal
 * Return: The number of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int checker, dif, size;
	unsigned int i, count = 0;

	checker = 1;
	dif = n ^ m;
	size = (sizeof(unsigned long int) * 8);

	for (i = 0; i < size; i++)
	{
		if (checker == (dif & checker))
			count++;
		checker <<= 1;
	}

	return (count);

}
