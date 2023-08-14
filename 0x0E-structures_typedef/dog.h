#ifndef DOG_H
#define DOG_H
/**
  * struct dog - structure
  * @name: char
  * @age: float
  * @owner: char
 */
struct dog
{
	char *name;
	float age;
	char *owner[50];
};
#endif
