# 1. stdarg.h:
* stdarg.h is a C standard library header file that stands for "standard arguments." It provides a mechanism in C programming to work with functions that accept a variable number of arguments. In other words, it allows you to create functions that can take a variable number of arguments, rather than a fixed number.
* The key function in stdarg.h is va_start, which initializes the argument list to access the variable arguments passed to the function. Then, you can use va_arg to retrieve each argument in sequence, and finally, you should call va_end to clean up the argument list.

# Example : 
#include <stdarg.h>

int sum(int num_args, ...) {
    va_list args;
    va_start(args, num_args);

    int result = 0;
    for (int i = 0; i < num_args; i++) {
        result += va_arg(args, int);
    }

    va_end(args);
    return result;
}

2. Variadic Functions:
Variadic functions are functions in programming languages that can accept a variable number of arguments. In C, as mentioned above, this is achieved using the stdarg.h header and its associated macros. Other languages, like C++, also have their own mechanisms for handling variadic functions.
Variadic functions can be useful when you need to create functions that can handle a different number of arguments depending on the context. Some standard C variadic functions include printf and scanf, which can take a variable number of arguments based on the format string provided.
It's important to use variadic functions carefully, as there is no compile-time checking of the number or type of arguments provided. The function itself must determine the number of arguments and interpret them correctly based on the context.

Const Keyword:
In C and C++, the const keyword is used to declare variables or function parameters as constant. When you declare a variable as const, its value cannot be modified once it is assigned. Similarly, when a function parameter is declared as const, the function is not allowed to modify the value of that parameter.
Here are some examples of using the const keyword:

// Constant variable
const int num = 10;
// num = 20; // This will cause a compilation error because num is constant.

// Constant pointer
int value = 42;
const int* ptr = &value;
// *ptr = 55; // This will cause a compilation error because ptr points to a constant value.

// Constant pointer to a constant
const int* const const_ptr = &value;
// *const_ptr = 30; // This will cause an error.
// const_ptr = &some_other_value; // This will also cause an error.

// Constant function parameter
void printValue(const int num) {
    // num = 100; // This will cause a compilation error because num is a constant parameter.
    printf("Value: %d\n", num);
}
Using the const keyword is a good practice as it helps make your code more readable, maintainable, and less error-prone by explicitly indicating which variables or parameters are intended to be constant. It also allows the compiler to perform certain optimizations since it knows that the value will not change.
