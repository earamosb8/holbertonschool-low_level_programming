#include<stdlib.h>
#include<stdio.h>
/**
 * main - arcg, *argv print the name of program
 * @argc: count parameters
 * @argv: array parameters
 * Return: return
 *
 */
int main(int argc, char *argv[])
{
	int a = 0;

	while (argv[a] != '\0')
	{
		a++;
	}
	a--;
	argc = a;
	printf("%d\n", argc);
	return (0);
}
