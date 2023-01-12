#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Extends the memory
 * @ptr: pointer to the old memory
 * @old_size: size of the old memory
 * @new_size: the new memory size
 *
 * Return: A pointer to the extended memory space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if ((new_size == 0) & (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (ptr == NULL)
		return (new_ptr);

	if (new_size < old_size)
		memcpy(new_ptr, ptr, new_size);
	else
		memcpy(new_ptr, ptr, old_size);

	free(ptr);

	return (new_ptr);
}
