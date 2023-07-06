#include "main.h"

/**
 * get_bit - Retrieves the value of the bit at the given index.
 * @n: The number from which to extract the bit.
 * @index: The index of the bit to be extracted.
 *
 * Return: The value of the bit at the given index, or -1 on error.
 *
 * Description: This function returns the value of the bit
 * at the specified index in the given number.
 */

int get_bit(unsigned long int n, unsigned int index)

{
unsigned int i;

if (index > (sizeof(8) * 8))
return (-1);

for (i = 0; i < index; i++)
n = n >> 1;
return ((n & 1));
}
