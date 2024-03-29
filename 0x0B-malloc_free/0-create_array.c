#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @c: char to assign
 * @size: size of array
 * Return: pointer to array, and NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
