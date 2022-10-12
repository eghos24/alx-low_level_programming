#ifndef _DOG_
#define _DOG_

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
/**
 * struct dog - dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: longer
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
