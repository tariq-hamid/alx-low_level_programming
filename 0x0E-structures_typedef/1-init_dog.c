#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog, passed to init_dog
 * @name: name member of the stuct dog, passed to init_dog
 * @age: age member of the stuct dog, passed to init_dog
 * @owner: owner member of the stuct dog, passed to init_dog
 *
 * Return: nth, void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
