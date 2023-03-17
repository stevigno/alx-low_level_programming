#include <stdio.h>
/**
 *  main - Entry point Size
 *
 *  Return: Always 0 (Success)
 *
 */

int main(void)

{

long long int a;
long double b;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
printf("Size of a double: %lu byte(s)\n", (unsigned long)sizeof(double));
printf("Size of a long double: %lu byte(s)\n", (unsigned long)sizeof(b));

return (0);
}

