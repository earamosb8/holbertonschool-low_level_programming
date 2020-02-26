#include "holberton.h"
/**
 * _puts_recursion - Write a function that prints a string.
 * @s: char
 * Return: Always 0.
 */
	void _puts_recursion(char *s)
	{
	int a = 0;

	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
	}
