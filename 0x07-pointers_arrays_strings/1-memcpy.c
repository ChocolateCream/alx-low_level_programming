/**
 * _memcpy - Copies the content from the src memory to the dest memory
 * @dest: A pointer to the destination memory
 * @src: A pointer to the source memory
 * @n: An unsigned int to the number of characters to fill in memory
 *
 * Return: A pointer to the destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
