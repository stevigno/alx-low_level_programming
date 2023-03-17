#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
const char *str = "and that piece of art is useful\" -Dora Korpar,2015-10-19\n";
size_t len = 0;
while (str[len])
len++;
write(STDERR_FILENO, str, len);
return (1);
}

