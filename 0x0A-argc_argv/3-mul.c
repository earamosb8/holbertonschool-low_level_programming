#include<stdio.h>
#include<stdlib.h>
/**
 * main - arcg, *argv print the name of program
 * @argc: count parameters
 * @argv: array parameters
 * Return: return
 *
 */
int main(int argc, char *argv[])
{

	if (argc == 3)
	{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
