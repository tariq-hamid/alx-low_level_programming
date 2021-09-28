#include "dog.h"
#include <stddef.h>

/**
 * print_dog - prints out a struct dog
 * @d: pointer to the struct dog, passed to print_dog
 *
 * Return: nth, void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
