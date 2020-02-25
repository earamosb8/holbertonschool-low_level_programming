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
	for (a = 0; a <= x; a++)
	{
	while (accept[a] != s[b])
	{
		b++;
	}
	qw = qw + 1;
	}
	return (qw);
}
