#ifndef HEADER_HOLBERTON
#define HEADER_HOLBERTON
/**
 * struct dog - dog structure
 * @name: char pointer member
 * @age: float member
 * @owner: char pointer member
 *
 * Description: This structure store data from dog
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
 * dog_t - Typedef for dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
