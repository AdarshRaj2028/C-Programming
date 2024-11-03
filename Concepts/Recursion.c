/*
Recursive Function or Resursion is a process when a function calls a copy of itself
to work on a smaller problem. 
Any function which call itself is called Recursive fucntion.
A Termination condition  is required to stop them from executing infinite copies of themselves forever.
Any problem that can be solved recursively, can also be solved iteratively.
*/

// Write a program with the help of recursion for finding the factorial of a number.

#include <stdio.h>
int factorial(int number){
    if (number == 0 || number == 1){
        return 1;
    }
    else {
        return (number * factorial(number - 1));
    }
}
int main(){
    int num;
    printf("Enter the number whose factorial you want to see: ");
    scanf("%d", &num);
    printf("The Factorial of %d is %d", num, factorial(num));
    return 0;
}