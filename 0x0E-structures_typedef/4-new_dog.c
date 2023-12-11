#include "dog.h"
#include <stdlib.h>

/**
 * copy - make copy of string
 * @s: string to be copied
 * Return: pointer to new string (Success) | NULL (Failure)
 */
char *copy(char *s)
{
	int i;
	char *new_s;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	new_s = malloc(sizeof(char) * (i + 1));
	if (!new_s)
		return (0);

	i = 0;
	while (s[i] != '\0')
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

/**
 * new_dog - create new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog (Success) | NULL (Failure)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tmp;
	char *name_copy, *owner_copy;

	name_copy = copy(name);
	owner_copy = copy(owner);
	tmp = malloc(sizeof(dog_t));
	if (!name_copy || !owner_copy || !tmp)
	{
		free(name_copy), free(owner_copy), free(tmp);
		return (0);
	}
	tmp->name = name_copy, tmp->age = age, tmp->owner = owner_copy;
	return (tmp);
}
