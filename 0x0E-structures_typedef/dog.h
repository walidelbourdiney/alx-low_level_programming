#ifndef DOG_H
#define DOG_H

/**
 * struct dog - short description
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owneer
 * Description: this structure contains of info about
 * dog[name, age, owner]
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
