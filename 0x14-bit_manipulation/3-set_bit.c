#include "main.h"

/**
 * set_bit - Modifies the bit value at the given index.
 * @n: A pointer to the number to be modified.
 * @index: The index of the bit to be modified.
 *
 * Return: 1 on success, -1 on error.
 *
 * Description: This function modifies the value of the bit
 * at the specified index in the given number.
 */

int set_bit(unsigned long int *n, unsigned int index)

{
unsigned int del;

if (index > sizeof(unsigned int) * 16)
return (-1);
del = 1;
del = del << index;
*n = ((*n) | del);
return (1);
}
