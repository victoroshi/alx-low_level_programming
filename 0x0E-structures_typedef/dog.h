#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H

/**
 * struct dog - User define type for a typical dog
 * @name: name of the dog
 * @age: age
 * @owner: owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H; struct dog */
