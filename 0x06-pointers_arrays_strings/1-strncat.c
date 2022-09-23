#include "main.h"
#include <string.h>

/**
 * _strncat -> function to append some charx
 * @dest: First Parameter
 * @src: Second Parameter
 * 2N: Third Paramter
 * Return: String
 */

char*_strncat(char*dest,char*src, in n)
{
	strncat(dest, src, n);
	return (dest);
}
