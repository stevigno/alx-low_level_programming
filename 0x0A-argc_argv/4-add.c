#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 on success and 1 on error
 */
int main(int argc, char **argv)
{
int i, n, sum = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
n = atoi(argv[i]);
if (n == 0 && argv[i][0] != '0')
{
printf("Error\n");
return (1);
}
else
{
sum += n;
}
}
printf("%d\n", sum);

return (0);
}
