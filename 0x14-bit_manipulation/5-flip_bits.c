#include "main.h"

/*
 * *
 * clear_bit - Resets the bit at the given index to 0.
 * @n: A pointer to the number to be modified.
 * @m: The index of the bit to be reset.
 *
 * Return: the number of bits you would need to flip
 *
 * Description: This function resets the bit to the specified index
 * in the given number by setting it to 0.
 *
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
