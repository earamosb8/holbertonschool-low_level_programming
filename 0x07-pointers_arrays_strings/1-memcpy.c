/**
 * _memcpy - memory copy
 * @dest: output
 * @src:sfdsfsdfdf
 * @n:dfsdfsdfsd
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	int a, b;

	b = n;
	for (a = 0; a <= b; a++)
	{
	dest[a] = src[a];
	}
	return (dest);
}


