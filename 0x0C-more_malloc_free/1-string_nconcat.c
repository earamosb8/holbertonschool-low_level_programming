#include <stdlib.h>
/**
 * string_nconcat---concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1, size2, sizet, c = 0, b = 0;
	unsigned int d = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	if (n < size2)
	{
	sizet = size1 + n, p = malloc(sizeof(char) * sizet + 1);
	}

	if (p != NULL)
	{
		while (b <= sizet)
		{
			if (b < size1)
				p[b] = s1[c], b++, c++;
			if (b >= size1)
				p[b] = s2[d], b++, d++;
		}
	}
	else
	{
		return (NULL);
	}

	p[b] = '\0';
	return (p);
}

