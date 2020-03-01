#include<ctype.h>
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
	int a = 0, num, suma;


	for (a = 1; a < argc; a++)
	{
		if (isdigit(*argv[a]))
		{
			num = atoi(argv[a]);
			suma = suma + num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

	}


	printf("%d", suma);
	printf("\n");

	return (0);

}

