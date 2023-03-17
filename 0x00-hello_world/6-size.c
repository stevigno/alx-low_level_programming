#include <stdio.h>
/**
 *  main - Entry point Size
 *
 *  Return: Always 0 (Success)
 *
 */

int main(void)

{

char c;
int d;
long int e;
float f;
long long int a;
long double b;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("Size of a long double: %lu byte(s)\n", (unsigned long)sizeof(b));

return (0);
}

