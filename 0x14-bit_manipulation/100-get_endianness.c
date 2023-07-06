#include "main.h"


/**
 * get_endianness - Determines the machine's endianness.
 *
 * Return: 1 if the machine is little-endian, 0 if it is big-endian.
 *
 * Description: This function determines the machine's endianness.
 * bytes) of the machine on which it is executed. It
 * uses a pointer to access the least significant byte
 * byte of an integer and checks whether it is the value 1.
 * case, it means the machine is in little-endian mode (low-order bytes are
 * bytes are stored first), otherwise it's in big-endian
 * big-endian (high bytes are stored first).
 */

int get_endianness(void)
{
int nub;

nub = 1;
if (*(char *)&nub == 1)
return (1);
else
return (0);
}

