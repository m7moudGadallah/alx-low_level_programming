#ifndef DOG_H_
#define DOG_H_

/**
  * struct dog - struct for dog
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
