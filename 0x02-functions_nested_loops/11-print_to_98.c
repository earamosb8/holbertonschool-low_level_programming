#include "stdio.h"
/**
 * print_to_98 - -----
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
int m = 0;

		for (m = n; m <= 98; m++)
		{
			printf("%d", m);
			if (m < 98)
			{
				printf(", ");
			}
		}
	printf("\n");
}
