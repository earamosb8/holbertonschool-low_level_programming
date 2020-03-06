#include <stdlib.h>
/**
 * *string_nconcat - create array
 * @s1: input array
 * @s2: input array
 * @n: number of chat to concatenate
 * Return: null in error
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, size1 = 0, size2 = 0, j = 0;
	char *str_;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + size1))
		size1++;
	while (*(s2 + size2))
		size2++;
	if (n < size2)
		size2 = n;
	str_ = malloc((sizeof(char) * size1 + sizeof(char) * size2) + 1);
	if (str_ != NULL)
	{
		for (; i < size1; i++)
			*(str_ + i) = *(s1 + i);
		for (; j < size2; j++)
		{
			*(str_ + i) = *(s2 + j);
			i++;
		}
	}
	else
		return (NULL);
	str_[i] = '\0';
	return (str_);
}

