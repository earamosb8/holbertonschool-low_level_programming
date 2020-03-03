#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
	int size1, size2, totalsize, contador,a,b;
	char *newstring;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}

 	while (s2[size2] != '\0')
        {
                size2++;
        }

	totalsize = size1+size2;
	newstring = malloc(sizeof(char) * totalsize+1);
	if (newstring == NULL)
	{
		return(NULL);
	}
	while ( contador <= size1)
	{
		newstring[contador] = s1[a];
		contador++;
		a++;
	}
	while (b <=size2)
	{
		newstring[contador] = s2[b];
        	contador++;
        	b++;
	}
	return (newstring);
}
