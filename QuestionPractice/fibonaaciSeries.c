// Fibonacci series through loops

// #include<stdio.h>
// int main(){
//     int n, f1 = 0, f2 = 1, f;
//     printf("Enter the number upto which you want to see the series: ");
//     scanf("%d", &n);
//     if (n == 1){
//         printf("0");
//     }
//     else if(n == 2){
//         printf("0, 1");
//     }
//     else{
//          printf("%d, %d", f1, f2);
//     for(int i = 3; i <= n; i++){
//         f = f1 + f2;
//         printf(", %d", f);
//         f1 = f2;
//         f2 = f;
//     }}
// return 0;
// }

// using Recursion

// #include <stdio.h>

// int fibonacci_rec(int no){
//     if(no == 1){
//         return 0;
//     }
//     else if(no == 2){
//         return 1;
//     }
//         else{
//             return  fibonacci_rec(no - 1) + fibonacci_rec(no - 2);
//         }
//     }

// int main(){
//     int n;
//     printf("Enter the nth number whose number you want to see Acc. to  Fibonacci Series: ");
//     scanf("%d", &n);
//     printf("%d",  fibonacci_rec(n));
//     return 0;
// }

// This program tells us that recursion is not always useful, like for this program, iterative approach is faster than recursive approach.

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
