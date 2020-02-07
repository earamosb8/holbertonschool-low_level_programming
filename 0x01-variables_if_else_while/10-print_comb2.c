#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48, b = 48;

	while (a < 58)
	{
	for (b = 48; b < 58; b++)
		{
		putchar(a);
		putchar(b);
		if (b == 57 && a == 57)
			{
			putchar('\n');
			}
			else
			{
			putchar(',');
			putchar (' ');
			}
			}
			a++;
	}

	return (0);
}
