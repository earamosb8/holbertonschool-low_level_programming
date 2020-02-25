/**
 * _strspn - check the code for Holberton School students.
 * @s:sadasdasd
 * @accept: dfasdasdas
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b = 0,d = 0, c = 0;
	unsigned int qw = 0;

	while (accept[a] != '\0')
	{
		a++;
	}
	while(s[b] != '\0')
	{
		for(c = 0; c <= a; c++)
		{
			if(accept[c] == s[d])
			{
				qw = qw + 1;
				b++;
				d = 0;
			}


		}
	}

return (qw);
}
