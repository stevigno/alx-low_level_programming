#include "main.h"
/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: char to check
 * @src: char to check
 * Return: 0 is success
 */
char *_strcpy(char *dest, char *src)
{
int n;

for (n = 0; src[n] != '\0'; n++)
dest[n] = src[n];
dest[n] = '\0';
return (dest);
}
