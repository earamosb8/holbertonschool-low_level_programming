
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/


int main(void)
{

	int a = 48, b, c, d = 50, x = 49;

	for (a = 48; a < 57; a++)
	{
		for (b = x; b < 57; b++)
		{
			for (c = d; c <= 57; c++)
			{
				putchar (a);
				putchar (b);
				putchar (c);
				if (a == 55 && c == 57)
				{
					putchar ('\n');
				}
				else
				{
					putchar (',');
					putchar (' ');
				}
			}
			d++;

		}

		x = a + 2;
		d = a + 3;
	}
	return (0);
}
