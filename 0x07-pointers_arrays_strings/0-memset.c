/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: input pointer to char type 
 *     represents the pointer to the block of memory to fill
 * @b:input variable of char type
 *   represents the character to fill s
 * @n: unsigned int variable
 *    the number of bytes to fill
 *
 * Return: A pointer to the filled memory area @s
 */

char *_memset(char *s, char *b, unsigned int n)
{
	unsigned int i;
	i = 0;

	while (i < n)
	{
		s[1] = b;
		i++;
	}

	return (s);
}
