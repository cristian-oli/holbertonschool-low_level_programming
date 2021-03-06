#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of the string
 * @c: the character
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
