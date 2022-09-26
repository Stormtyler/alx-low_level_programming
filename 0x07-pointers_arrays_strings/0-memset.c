#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: memory area to fill
 * @b: constant byte to fill
 * @n: bytes of memory area to fill
 * description _memset: over there
 *
 * Return: the memory area filled
 *
 */
void *_memset(void *s, int b, unsigned int n)
{
	unsigned int a;

	for (a = 0, a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
