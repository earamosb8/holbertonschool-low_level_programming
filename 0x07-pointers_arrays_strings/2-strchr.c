#include "holberton.h"
/**
 * _strchr - writes the character c to stdout
 * @s: The character to print
 * @c: dfsdfsds
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == c)
		{
			return (s + a);
		}
		a++;
	}
return (NULL);
}
