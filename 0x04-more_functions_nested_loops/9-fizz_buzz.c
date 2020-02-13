#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int a, m_5, m_3;

	for (a = 1; a <= 100; a++)
	{
		m_3 = a % 3;
		m_5 = a % 5;
		if (m_3 == 0 && m_5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (m_3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (m_5 == 0)
		{
			printf("Buzz");
			if (a == 100)
			{
				printf("\n");
			}
			else
			{
			printf(" ");
			}
		}
		else
		{
			printf("%d", a);
			printf(" ");
		}
	}
	return (0);

}
