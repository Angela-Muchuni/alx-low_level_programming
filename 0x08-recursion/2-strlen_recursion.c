#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string
 * Return: length of the stirng
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
