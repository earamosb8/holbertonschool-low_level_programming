#include <stdlib.h>
/**
 * str_concat---concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, totalsize, contador = 0, a = 0, b = 0;
	char *newstring;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		*s2 = '\0';
	}
	if (s1 == NULL && s2 == NULL)
	{
		s1 = malloc(1);
		s2 = malloc(1);
		*s2 = '\0';
		*s1 = '\0';
	}
	while(s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	totalsize = size1 + size2;
	newstring = malloc(sizeof(char) * totalsize);
	if (newstring == NULL)
		return (NULL);
	while (contador <= totalsize)
	{
		if (a < size1)
		{
			newstring[contador] = s1[a];
			a++;
			contador++;
		}
		if (a == size1)
		{
			newstring[contador] = s2[b];
			b++;
			contador++;
		}
	}
	return (newstring);
}



