#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Write a function that returns all its parameters.
 * @format: character
 *
 */
void print_all(const char * const format, ...)
{
	int b = 0;
	char elchar;
	va_list num_args;
	char *sep = "";
	char *michar;

	va_start(num_args, format);
		while (format[b] != '\0')
		{
			elchar = format[b];

			switch (elchar)
			{
				case 'c':
				printf("%s%c", sep, va_arg(num_args, int));
				break;
				case 'i':
				printf("%s%d", sep, va_arg(num_args, int));
				break;
				case 'f':
				printf("%s%f", sep, va_arg(num_args, double));
				break;
				case 's':
				michar = va_arg(num_args, char *);
				if (michar == NULL)
					michar = "(nil)";
				printf("%s%s", sep, michar);
				break;
				default:
				b++;
				continue;
			}
		sep = ", ";
		b++;
		}
		va_end(num_args);
		printf("\n");



}
