#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H

/**
 * struct dog - User define type for a typical dog
 * @name: name the dog
 * @age: age
 * @owner: owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *ptr);

/**
 * dog_t - typedef to alias dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H; struct dog */1~
