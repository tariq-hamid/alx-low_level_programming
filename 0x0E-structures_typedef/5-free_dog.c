#include "dog.h"
#include <stddef.h>

/**
 * free_dog - frees a memory block of type dog_t
 * @d: address to the memory block to be freed, passed to free_dog
 *
 * Return: nth, void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
