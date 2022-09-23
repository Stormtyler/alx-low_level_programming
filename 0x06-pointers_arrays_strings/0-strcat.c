#include "main.h"

/**
 * _strcat -> this is function strcat
 * @dest: Firsr parameter
 * @src: Second Parameter
 * Return: A String
 */

char *_strcat(char *dest, char *src)
{
	int len = 0,i;

	while (dest[len])
		len++;

	for (i = 0; src[i] !='\0;i++)
	{
		dest[len] = '\0';
		return (dest);
	}
}
