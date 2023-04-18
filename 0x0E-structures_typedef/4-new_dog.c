#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * _strCpy - function to copy string
  *
  * @src: string
  * @dest: string
  *
  * Return: (dest)
  */
char *_strCpy(char *src, char *dest)
{
	register int i, len;

	for (len = 0; src[len]; len++)
		;

	dest = malloc(len * sizeof(*src) + 1);

	if (!dest)
		return (NULL);

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
  * new_dog - create new dog and initial it with another
  *
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  *
  * Return: pointer to struct, otherwise NULL
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));

	if (!dog)
	{
		free(dog);
		return (NULL);
	}

	dog->name = _strCpy(name, dog->name);
	dog->owner = _strCpy(owner, dog->owner);
	dog->age = age;

	if (!dog->name || !dog->owner)
	{
		if (!dog->name && dog->owner)
			free(dog->owner);

		if (!dog->owner && dog->name)
			free(dog->name);

		free(dog);
		dog = NULL;
		return (NULL);
	}

	return (dog);
}
