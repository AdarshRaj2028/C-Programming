/*
Recursive Function or Resursion is a process when a function calls a copy of itself
to work on a smaller problem. 
Any function which call itself is called Recursive fucntion.
A Termination condition  is required to stop them from executing infinite copies of themselves forever.
Any problem that can be solved recursively, can also be solved iteratively.
*/

// Write a program with the help of recursion for finding the factorial of a number.

// #include <stdio.h>
// int factorial(int number){
//     if (number == 0 || number == 1){
//         return 1;
//     }
//     else {
//         return (number * factorial(number - 1));
//     }
// }
// int main(){
//     int num;
//     printf("Enter the number whose factorial you want to see: ");
//     scanf("%d", &num);
//     printf("The Factorial of %d is %d", num, factorial(num));
//     return 0;
// }

// Here this program is done by both methods, i.e Recursive and iterative Approach. But Iterative approach is much faster than the recursive approach.
// Recursion is a good approach when it comes to problem solving however, programmer needs to evaluate the need and impact of using recursive or iterative approach while solving a particular problem.

#include <stdio.h>

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n-1; i++)
    {
        b = a+b; //1 for iteration 1
        a = b-a; //1 for iteration 1
    }
    return a;
}

int fib_recursive(int n)
{
     if(n == 1 || n == 2)
    return n-1;
    else{
       return fib_recursive(n-1) + fib_recursive(n-2);
    }
}

int main()
{
    int number;    
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no. %d using iterative approach is %d\n",number, fib_iterative(number));
    printf("The value of fibonacci number at position no. %d using recursive approach is %d\n",number, fib_recursive(number));
    return 0;
}