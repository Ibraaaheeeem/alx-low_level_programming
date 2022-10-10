/**
 * struct dog - Dog attributes
 *
 * @name: dog age
 * @age: dog age
 * @owner: dog owner
 *
 * Description: Dog struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - dog struct typedef
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

