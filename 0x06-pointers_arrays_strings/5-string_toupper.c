/**
 * string_toupper - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_toupper(char *s)
{

	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		s[a] -= 32;
a++;
	}

return (s);
}
