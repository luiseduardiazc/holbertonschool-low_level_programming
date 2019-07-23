#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *_strlen - reset number
 *Description: This function return a length for some string
 *@s: pointer char
 *Return: int length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
/**
 *_strcpy - reset number
 *Description: This function get an array and print n elements
 *@dest: pointer char
 *@src: int parameter
 *Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i <= _strlen(src))
	{
		char temp = src[i];
		*dest = temp;
		dest++;
		i++;
	}
	dest[i] = '\0';
	return (src);
}
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
	dog_t *newdog;

	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newdog->name == NULL)
		return (NULL);
	_strcpy(newdog->name, name);

	newdog->age = age;

	if (owner == NULL)
	{
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newdog->owner == NULL)
		return (NULL);
	_strcpy(newdog->owner, owner);

	return (newdog);
}
