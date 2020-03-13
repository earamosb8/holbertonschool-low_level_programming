#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: parameters
 * Return: sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *palabra;
	va_list num_args;
	va_start(num_args, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			palabra = va_arg(num_args,char *);
			if (palabra)
			{
			printf("%s", palabra);
			}
			else
			{
			printf("(nil)");
			}
			if(separator != NULL)
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
