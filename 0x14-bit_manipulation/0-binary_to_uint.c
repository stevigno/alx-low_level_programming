#include "main.h"
#include <stdio.h>

/**
 * char string
 *
 * convert a binary number to an unsigned int
 * 
 * converted decimal number or 0 if there is an unconvertable char
 */


unsigned int binary_to_uint(const char *b)
{
unsigned int all, energ;
int len;

if (b == NULL)
return (0);
for (len = 0; b[len]; len++)
{
if (b[len] != '0' && b[len] != '1')
return (0);
}
for (energ = 1, all = 0, len--; len >= 0; len--, energ *= 2)
{
if (b[len] == '1')
all += energ;
}
return (all);
}
