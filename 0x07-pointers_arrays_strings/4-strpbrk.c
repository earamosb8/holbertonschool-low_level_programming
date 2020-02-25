/**
 * _strspn - check the code for Holberton School students.
 * @s:sadasdasd
 * @accept: dfasdasdas
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
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
				return (s + a);
			}
		}
	a++;
	}

	return (0);
}
