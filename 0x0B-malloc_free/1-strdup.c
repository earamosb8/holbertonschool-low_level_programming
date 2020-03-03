#include <stdio.h>
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

	while(str[a] != '\0')
	{
		a++;
	}
	a++;
	if (a == 0)
	{
		return (NULL);
	}

	nstring = malloc(sizeof(char) * a);
	for (b = 0; b <= a ; b++)
	{
		nstring[b] = str[b];
	}
	return (nstring);
}

