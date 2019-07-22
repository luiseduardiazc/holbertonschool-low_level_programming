#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *new_dog - creates a new dog
 *@name: char pointer
 *@age: float parameter
 *@owner: char pointer
 *Description: funtion create new dog
 *Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return (NULL);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
