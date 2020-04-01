#include "holberton.h"
/**
 * main - copies a file
 *
 * @ac: argument cont
 * @av: arguments
 * Return: Returns 97 for syntax error, 98 for read error, 99 write, 100 close
 */
int main(int ac, char *av[])
{
	int opf = 0;
	int opc = 0;
	int rd = MAX_SIZE, wr, c1, c2;
	char temp[MAX_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	opf = open(av[1], O_RDONLY);
	if (opf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	opc = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (opc == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while (rd == MAX_SIZE)
	{
		rd = read(opf, temp, MAX_SIZE);
		wr = write(opc, temp, rd);
	}
	c1 = close(opf);
	c2 = close(opc);
	if (c1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opf), exit(100);
	if (c2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opc), exit(100);
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (wr <= -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	return (0);
}
