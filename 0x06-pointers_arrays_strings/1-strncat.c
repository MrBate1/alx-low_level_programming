#include "main.h"

/**
 *_strncpy - concatenates two string without NULL operator
 *@dest: 1st string
 *@src: 2nd string
 *@n: integer for how many words that must be copied
 *Return: dest concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
