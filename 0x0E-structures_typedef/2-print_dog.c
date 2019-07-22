#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *print_dog - print structure
 *@d: pointer to dog structure
 *Description: function ptints structure
 *Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		if (d->owner == NULL)
		{
			d->owner = "(nill)";
		}
		printf("Name: %s\n", d->name);
		printf("Age: %6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
