#include "doh.h"
#include <stdlib.h>

/**
 * free_dog - frees yo dwags
 * @d: yo dawg
 *
 * Return: void.
 */
void free_dog(dog_y *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
