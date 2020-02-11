/**
 * _abs - writes the character c to stdout
 * @a: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
		return (a);
	}
	else if
		(a == 0)
	{
		return (a);
	}
	else
	{
		a = a;
		return (a);
	}
}
