#include "main.h"

/**
 * @n: A pointer to the number to be modified.
 * @index: The index of the bit to be reset (from right to left, from 0 to 63).
 *
 * Return: 1 on success, -1 on error.
 *
 * Description: This function resets the bit to
 * the specified index in the given number by setting it to 0.
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
unsigned long int mot;

mot = 1;
mot = mot << index;
if (index > sizeof(unsigned long int) * 8 || n == NULL)
return (-1);
if (((*n >> index) & 1) == 1)
*n = mot ^ *n;

return (1);
}
