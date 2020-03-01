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

	for (a = 0; a < argc; a++)
	{
	printf("%s\n", argv[a]);
	}

	return (0);
}
