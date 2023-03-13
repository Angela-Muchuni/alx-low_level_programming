#include "main.h"
#include <unistd.h>
/**
 * _putchar: writes the character c to stdout
 * @c: the character to print
 * Return: 1(success)
 * and -1 on error, and errno set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
