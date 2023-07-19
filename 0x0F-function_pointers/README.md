# C - Function pointers
## PROJECT TASKS

* Function to Print a Name
- Write a function print_name that takes a pointer to a character array (char *name) and a function pointer void (*f)(char *) as arguments. The function is responsible for printing the provided name.

* Function to Execute Action on Array Elements
- Create a function array_iterator that receives an integer array (int *array), its size (size_t size), and a function pointer void (*action)(int) as parameters. The purpose of this function is to execute the specified action function on each element of the array.

* Function to Search for an Integer in an Array
-Design a function int_index that searches for an integer in an array. It takes an integer array (int *array), the number of elements in the array (int size), and a function pointer int (*cmp)(int) to compare values. The function returns the index of the first element for which the comparison function cmp does not return 0. If no match is found or the array size is non-positive, it returns -1.

* Simple Calculator Program
- Create a program that performs simple arithmetic operations. The program takes three arguments: num1, operator, and num2. You can use the standard library and atoi to convert string inputs to integers. The supported operators are +, -, *, /, and %. The program prints the result of the operation and exits with appropriate status codes for errors, such as wrong arguments, unrecognized operators, or division by zero.

* Program to Print Main Function Opcodes
- Develop a program that prints the opcodes of its own main function. The program should accept the number of bytes as an argument. The opcodes are displayed in hexadecimal format, two characters per opcode, in lowercase. The program uses atoi to convert the argument to an integer. It exits with specific status codes for incorrect arguments or negative byte values.
