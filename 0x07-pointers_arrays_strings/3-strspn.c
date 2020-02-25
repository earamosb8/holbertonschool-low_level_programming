/**
 * _strspn - check the code for Holberton School students.
 * @s:sadasdasd
 * @accept: dfasdasdas
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{	unsigned int qw = 0;
	int a = 0, b = 0, x = 0;

	while (accept[x] != '\0')
	{
		x++;
	}

	while (a <= x)
	{
		for (b = 0; b <= x; b++)
		{
			if (s[a] == accept[b])
			{
				qw = qw + 1;

			}
		}
	a++;
	}

	return (qw);
}
