/*
Actual and Formal Parameters
-> When a function is called, the values(expressions) that are passed in the call are called the arguments or actual parameters.
-> Format parameters are local variables which are assigned values from the arguments when the function is called. 

We Can call a function in two different ways, based on how we specify the arguments, and these two ways are:

-> Call by Value:
--> When we call a function by value, it means that we are passing the values of the arguments which are copied into the formal parameters of the function.
--> Which Means that the original values remain unchanged and the only parameters inside the function changes.

-> Call by Reference(Pointer's game):
--> The Call by reference method of passing arguments to a C function copies the address of the arguments into the formal parameters. 
--> Addresses Of the actual arguments are copied and then assigned to the corresponding formal arguments.  

*/

// Example of Call by Reference:

#include <stdio.h>

void swap(int *a,int *b){
    int temp;
temp = *a;
*a = *b;
*b = temp;
return;
}

int main()
{
    int x = 10, y = 15;
    printf("Values of x and y is %d and %d\n", x, y);
    swap(&x, &y); // Call by Reference
    printf("Values of x and y after swapping %d and %d", x, y);
  return 0;
}

// 2nd Example of Call by Reference:

// #include <stdio.h>

// void add_sub(int *a, int *b){
//     int temp;
//     temp = *a;
//   *a = *a + *b;
//   *b = *b - temp;
//   return;
// }

// int main()
// {
//     int x, y;
//     printf("Enter the 1st number: ");
//     scanf("%d", &x);
//     printf("Enter the 2nd number: ");
//     scanf("%d", &y);
//     add_sub(&x, &y);
// printf("Addition = %d\n", x);
// printf("Substraction = %d", y);
//     return 0;
// }