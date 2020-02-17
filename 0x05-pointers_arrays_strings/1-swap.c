/**
 * swap_int - ----haracter c to stdout
 * @a: The character to print
 * @b: sadasdasda
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
	int c = 0, d = 0;

	c = *b;
	d = *a;
	*b = d;
	*a = c;
}


