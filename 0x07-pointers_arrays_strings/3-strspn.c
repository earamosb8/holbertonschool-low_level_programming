/**
 * _strspn - check the code for Holberton School students.
 * @s:sadasdasd
 * @accept: dfasdasdas
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{	unsigned int qw = 0;
	int a = 0, b = 0, c = 0;

	while (accept[b] != '\0')
	{
		b++;
	}

	while (s[a] != '\0')
	{
		for (c = 0; c < b; c++)
		{
			if (s[a] == accept[c])
			{
				qw++;
				break;
			}
		}
			if (accept[c] == '\0')
			{
				return (qw);
			}
	a++;
	}

	return (qw);
}
