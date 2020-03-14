#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Write a function that returns the sum of all its parameters.
 * @separator: separator character
 * @n: numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list num_args;

	va_start(num_args, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(num_args, int));
			if (separator != NULL)
			{
				if (i < n - 1)
				{
				printf("%s", separator);
				}
			}
		}
		printf("\n");
	}
va_end(num_args);
}
