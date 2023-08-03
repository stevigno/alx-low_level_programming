#include "main.h"

/**
 * flip_bits - Calculates the number of bits to flip to go from n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 *
 * Description: This function calculates the number of bits
 * that must be inverted inverted to go from number n to number m..
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
unsigned long int nm;
unsigned long int sl;

nm = n ^ m;
for (sl = 0; nm > 0;)
{
if ((nm & 1) == 1)
sl++;
nm = nm >> 1;
}

return (sl);
}

