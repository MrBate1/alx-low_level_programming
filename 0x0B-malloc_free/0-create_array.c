#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars and
 *               initializes it with a specific char
 *@size: size of the array to be initialized
 *@c: specific char to intialize the array with
 *
 *Return: if size == 0 or function fails = NULL.
 *         else = a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
