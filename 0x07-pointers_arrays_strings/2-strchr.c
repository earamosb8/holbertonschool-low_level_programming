#include <stdio.h>
/**
 * _strchr - writes the character c to stdout
 * @s: The character to print
 * @c:asddadasdasdas
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c)
	{
		i++;
	}
return (s + i);
}

