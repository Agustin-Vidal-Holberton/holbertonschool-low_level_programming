#ifndef DOG_H
#define DOG_H

/**
 * struct dog - estructura que almacena informacion de un perro
 * @name: nombre del perro(char)
 * @age: edad del perro (float)
 * @owner: due√o del perro (char)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/*Prototipo de funciones*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H*/
