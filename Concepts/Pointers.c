/*
Pointers are variables that store the memory address of another variable.
Can be of type  int, float, char, array, function etc.
Size depends on the architecture i.e. 2 bytes for 32 bit
Pointers in C programming can be declared using *(asterisk symbol). 

'&' and '*' Operators in C
-> The address of the operator & returns the address of a variable
-> * is the dereference operator(Also known as indirection operator) used to get the value at a given address.

%p is used to print a pointer value (an address). It outputs the address in a platform-dependent format, usually hexadecimal.
%x is used to print an unsigned integer in hexadecimal format.

-> A pointed that is not assigned any value but NULL is known as the NULL pointer.
-> Also known as a pointer that does not point to any object of function.
int *ptr = NULL

Uses of Pointer:

-> Dynamic memory allocation
-> Arryas, Functions, and Structures
-> Retur multiple values from a function
-> Pointer reduces the code and improves the performanceff
*/

#include <stdio.h>

int main(){
    int a = 35;
    int *ptra = &a;
    printf("The value stored in a is %d\n", a);    
    printf("The value stored in a is %d\n", *ptra);    
    printf("The address of a is %x\n", ptra);
    printf("The address of pointer a is %p\n", ptra);
    printf("The address of pointer a is %x", ptra);
    return 0;
}