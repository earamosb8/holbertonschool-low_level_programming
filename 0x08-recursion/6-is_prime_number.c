/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int comp(int a,int n);
int is_prime_number(int n)
{
	if(n >= 2)
	{
		int a = 2;
		return(comp(a,n));
	}
	else
	{
	return(0);
	}
}

/**
 * comp - writes the character c to stdout
 * @a: increment
 * @n: int
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int comp(int a,int n)
{

	if(n % a == 0 && a == n)
	{
		return (1);
	}
	else if(n % a == 0 && a != n)
	{
		return (0);
	}
	else
	{
		return(comp(a+1,n));
	}
}
