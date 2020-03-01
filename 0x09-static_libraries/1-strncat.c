/**
 * _strncat - writes the character c to stdout
 * @dest: The character to print
 * @src: asdasd
 * @n: dsdfss
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0, c = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		b++;
	}
	if (n > b)
	{
		n = b;
	}
	while (c < n)
	{
		dest[a] = src[c];
		c++;
		a++;
	}
	return (dest);
}

