#include <stdio.h>
#include <string.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts2(char *str)
{
int a=0, b;
a = strlen(str);
printf("%d",a);
for (b = 0; b >=a; b++)
{
	str[b];
printf("%c",str);
}
printf("\n");
}
