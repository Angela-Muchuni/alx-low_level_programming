#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: string
 * Return: 0(success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
