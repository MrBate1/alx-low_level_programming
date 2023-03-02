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
	int i = 0, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && src[j] < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
