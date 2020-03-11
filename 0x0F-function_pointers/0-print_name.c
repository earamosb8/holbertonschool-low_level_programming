/**
 * print_name - check the code for Holberton School students.
 * @name: char to print
 * @f: pointer to function
 */
#include <stdlib.h>
void print_name(char *name, void (*f)(char *))
{
	if (*f != NULL)
	{
		f(name);
	}
}

