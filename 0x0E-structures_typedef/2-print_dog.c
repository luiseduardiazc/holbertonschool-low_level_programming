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
			printf("Name: %s\n", "(nil)");
		} else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age == 0)
		{
			printf("(nil)\n");
		} else
		{
			printf("Age: %6f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("(nil)\n");
		} else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
