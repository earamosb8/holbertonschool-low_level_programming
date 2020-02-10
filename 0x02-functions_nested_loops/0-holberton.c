/**
 * main - Entry point
 * @c: The character to print
 * Return: Always 0 (Success)
 */

int _putchar(char c);
int b;
int main(void)
{
	char a[9] = "Holberton";

	for (b = 0; b <= 8; b++)
	{
		_putchar(a[b]);
	}
_putchar('\n');
return (0);
}
