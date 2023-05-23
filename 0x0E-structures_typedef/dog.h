/**
  * struct dog - structure
  * @name: variable
  * @age: variable
  * @owner: variable
  *
  * Description : long description
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#ifndef DOG_H
#define DOG_H
/**
  * prototypes
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
