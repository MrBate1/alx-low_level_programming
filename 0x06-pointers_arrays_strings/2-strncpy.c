#include "main.h"

/**
 *_strncpy - copys a string into another
 *@dest: destination for string to be copied in
 *@src: source of original string
 *@n: number of elemts to be copied
 *Return: dest the copies string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && src[i] < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
