#include "main.h"

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
int n;

srand(time(0));
i = rand() - RAND_MAX / 2;
if (i > 0)
printf("%d is positive\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else if (i < 0)
printf("%d is negative\n", i);
return (0);
}
