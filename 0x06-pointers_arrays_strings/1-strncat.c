#include "main.h"

/**
 *_strncpy - concatenates two string without NULL operator
 *@dest: 1st string
 *@src: 2nd string
 *@n: integer for how many words that must be copied
 *Return: dest concatenated strings
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
