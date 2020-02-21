/**
 * cap_string - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *c)
{

	int a = 0, sw = 0, x = 0;
	char b[] = {" \t\n,;.\"!?(){}"};

	while (c[a] !=  '\0')
	{
	if (a == 0)
	{
	c[a] -= 32;
	}

		for (x = 0; x <= 12; x++)
		{
			if (c[a] == b[x])
			{ sw = a + 1;
			if (c[sw] >= 'a' && c[sw] <= 'z')
			c[sw] -= 32;
			}
			else
				continue;



		}
	a++;

	}
return (c);
}

