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
	dog_t *copy_dog;
	int name_len = _strlen(name);
	int owner_len = _strlen(owner);

	if (name == NULL || owner == NULL)
		return (NULL);

	copy_dog = malloc(sizeof(dog_t));

	if (copy_dog == NULL)
		return (NULL);

	copy_dog->name = malloc(name_len + 1);

	if (copy_dog->name == NULL)
	{
		free(copy_dog);
		return (NULL);
	}

	copy_dog->owner = malloc(owner_len + 1);

	if (copy_dog->owner == NULL)
	{
		free(copy_dog->name);
		free(copy_dog);
		return (NULL);
	}

	_strcpy(copy_dog->name, name);
	copy_dog->age = age;
	_strcpy(copy_dog->owner, owner);

	return (copy_dog);
}
