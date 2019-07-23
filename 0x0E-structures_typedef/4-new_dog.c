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
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	if (name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	new_dog->age = age;
	if (owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);
	return (new_dog);
}
