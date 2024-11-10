/*
Function: It is used to divide large C programs into smaller pieces.
It can be called multiple times to provide resuability and modularity to the C program. 
Also we can divide work among programers by using functions.
Functions is of 2 types:

-Library Function: These are pre-written functions which can be called from header files.

-User Defined Function: Function which are created by the programmer to reduce the complexity of the program.

The basic syntax of a C function is written as follows:
return_type function_name(data_type parameters1 , data_type parameter2, ...){
code to be executed
}
 In C, the order of evaluating function arguments is not specified.
 This means that the compiler can choose to evaluate the arguments in any order it likes.
*/
//In programming, an argument is a value passed to a function when it is called. 

#include  <stdio.h>
//Function code example 1 
// With Arguments and with return value.
int sum(int a, int b) // Instead of sum we can write any name.
{
    return a + b;
}
//Function code example 2 
// With Arguments and without return value.
void printstar(int n)
{
   for(int i = 0; i < n; i++)
   printf("%c", '*');
}
//Function code example 3
// Without Arguments and with return value.
int takenumber()
{
    int i;
    printf("Enter the number: ");
    scanf("%d", &i);
    return i;
}
//Function code example 4
// Without Arguments and without return value.
void example()
{
    printf("Hello, World!");
}

// Main Function in which we are calling all the user defined fucntions.
int main()
{
    int a, b, c, f;
    a = 10;
    b = 20;
    c = sum(a, b);
    f = takenumber();
    printf("The sum is %d \n", c);
    printstar(9);
    printf("\nThe number entered is %d \n", f);
    printf("The text entered by the user: ");
    example();
    return 0;
}



