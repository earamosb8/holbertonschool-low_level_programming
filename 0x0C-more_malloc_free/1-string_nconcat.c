#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1,size2, sizet, c = 0,b = 0;
	unsigned int d = 0;
	if (s1 == NULL && s2 == NULL)
	{
		s1 = malloc(1), s2 = malloc(1), *s1 = '\0', *s2 = '\0';
	}
	else if (s1 == NULL && s2 != NULL)
	{
		s1 = malloc(1);
		*s1 = '\0';
	}
	else if (s2 == NULL && s1 != NULL)
	{
		s2 = malloc(1), *s2 = '\0';
	}

	while(s1[size1] != '\0')
	{
		size1++;
	}
 	while(s2[size2] != '\0')
        {
                size2++;
        }
	if (n >= size2)
	{
		n = size2;
	}
	else
	{
		n = n;
	}
	sizet = size1 + n;
	p = malloc(sizeof(char) * sizet + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	while(b <= sizet)
	{
		if (b < size1)
		{
			p[b] = s1[c];
			b++;
			c++;
		}
		if (b >= size1)
		{
			p[b] = s2[d];
			b++;
			d++;
		}
	}
if(p == NULL)
{
return (NULL);
}
	p[b] = '\0';
	return(p);
}

