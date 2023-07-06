#include "main.h"

/**
 * flip_bits - Calculates the number of bits to flip to go from n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 *
 * Description: This function calculates the number of bits
 * that must be inverted inverted to go from number n to number m. It performs
 * an XOR between the two numbers, then counts the number of bits
 * 1 bits in the result.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
unsigned long int res;
unsigned long int co;

res = n ^ m;
for (co = 0; res > 0;)
{
if ((res & 1) == 1)
co++;
res = res >> 1;
}

return (co);
}
