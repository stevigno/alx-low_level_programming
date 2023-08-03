#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number into an unsigned integer
 * @b: pointer to a string representing the binary number
 *
 * Return: the converted decimal value or 0
 */


unsigned int binary_to_uint(const char *b)
{
unsigned int ma, mo;
int len;

if (b == NULL)
return (0);
for (len = 0; b[len]; len++)
{
if (b[len] != '0' && b[len] != '1')
return (0);
}
for (mo = 1, ma = 0, len--; len >= 0; len--, mo *= 2)
{
if (b[len] == '1')
ma += mo;
}
return (ma);
}

