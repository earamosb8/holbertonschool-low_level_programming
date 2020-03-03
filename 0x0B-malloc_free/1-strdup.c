#include <stdlib.h>
/**
 * _strdup---create a array
 * @str: "holberton"
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strdup(char *str)
{
	int a = 0, b;
	char *nstring;

	while (str[a] != '\0')
	{
		a++;
	}
	a++;
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		nstring = malloc(sizeof(char) * a);
		if (nstring == NULL)
		{
			return (NULL);
		}
		for (b = 0; b <= a ; b++)
		{
			nstring[b] = str[b];
		}
	}
	return (nstring);
}


