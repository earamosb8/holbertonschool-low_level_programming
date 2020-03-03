#include <stdlib.h>
/**
 * create_array ---create a array
 * @size: length of char
 * @c: char
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *src;

	src = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	for (a = 0 ; a <= size; a++)
	{
		src[a] = c;
	}
	return (src);
}
