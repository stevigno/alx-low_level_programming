#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the alphabet in lowercase except for the letters
 *
 * 'e' and 'q', followed by a new line, using the putchar() function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}

putchar('\n');

return (0);
}
