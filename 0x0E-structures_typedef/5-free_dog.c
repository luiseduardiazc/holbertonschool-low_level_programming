#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *free_dog - free dog
 *@d: pointer to dog structure
 *Description: function free dog
 *Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
