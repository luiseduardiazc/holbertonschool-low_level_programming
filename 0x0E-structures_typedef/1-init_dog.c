#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - initialize structure
 *@d: pointer to dog structure
 *@name: char pointer parameter
 *@age: float parameter
 *@owner: char pointer parameter
 *Description: function initialize dog structure
 *Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
