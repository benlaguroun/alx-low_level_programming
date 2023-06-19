#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;

	/* Allocate memory for the dog structure */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	/* Duplicate the name string */
	name_copy = strdup(name);
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}

	/* Duplicate the owner string */
	owner_copy = strdup(owner);
	if (owner_copy == NULL)
	{
		free(dog);
		free(name_copy);
		return (NULL);
	}

	/* Assign the duplicated strings and age to the dog structure */
	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
