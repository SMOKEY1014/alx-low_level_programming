# 0x0B. C - malloc, free

* malloc - memory allocation - void * malloc(size_t size)
**returns void ptr that gives us the address of the block of memory
 **void *p = malloc(4) // Allocate memory size of 4 bytes for *p
 **void *p = malloc(size of (int)) // reserve size of one int, 
 if you want more space for intergers, use malloc( 10 * size of (int)).

* calloc - void * calloc(size_t num, size_t)
** same as malloc but not need to multiply the size with element
**void *calloc(3, size of (int)) 
 int *p = (int *)calloc(3, size of (int))

* realloc - void * realloc(void * prt, size_t size)

* free - frees the memory in the program or function
