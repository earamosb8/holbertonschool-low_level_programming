/**
 * _strncpy - writes the character c to stdout
 * @dest: The character to print
 * @src : sdfsdfsdf
 *Return: On success 1.
 * @n : dssdf
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (src[b] != '\0' && b < n)
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}

