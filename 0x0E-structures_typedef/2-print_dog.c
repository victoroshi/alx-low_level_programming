#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_dog - struct for the dog
  * @d: pointer to struct dog
  *
  * Return: void
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	else
	{
		if (d->name == NULL)
			d->name = "(nil)";

		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
