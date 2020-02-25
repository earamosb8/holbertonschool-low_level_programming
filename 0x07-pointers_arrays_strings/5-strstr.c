/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0, cont = 0;
	while(needle[a] != '\0')
	{
		a++;
	}
	while(haystack[b] != '\0')
	{
		for(c = 0; c < a; a++)
		{
			if(haystack[b] == needle[c])
			{
				cont++;
				if( cont == a)
				{b = b- a;
					return(b + a
			}
			else
			{
				cont = 0;
			}
		}
	}

}
