# C - Structures, typedef
## PROJECT TASKS

* Poppy
- Define a new structure type named struct dog with the following elements:
    name of type char *
    age of type float
    owner of type char *
* A dog is the only thing on earth that loves you more than you love yourself
- Write a function init_dog that initializes a variable of type struct dog.
- Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

* A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
- Write a function print_dog that prints a struct dog.
- Prototype: void print_dog(struct dog *d);

Format: See the example below.

- You are allowed to use the standard library.

- If an element of d is NULL, print (nil) instead of that element. For example, if name is NULL, print Name: (nil).

- If d is NULL, print nothing.

* Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
- Define a new type dog_t as an alias for the type struct dog.

A*  door is what a dog is perpetually on the wrong side of
- Write a function new_dog that creates a new dog.

- Prototype: dog_t *new_dog(char *name, float age, char *owner);

- You need to store a copy of name and owner.

- Return NULL if the function fails.

* How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
- Write a function free_dog that frees dogs.
- Prototype: void free_dog(dog_t *d);
