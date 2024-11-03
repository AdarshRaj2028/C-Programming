/*
A do-while loop is a type of loop that executes the body of the loop at least once
and then checks the condition to determine whether to continue executing the loop
Whereas in While loop first checks the condition before running the loop.
*/
/*
Uses of For, While and Do-While Loops
- when you need to iterate over a fixed range of values, a for loop is a better choice.
- while loops are more suitable when the iteration condition is more complex or dynamic, and the number of iterations is not fixed.
- do-while loops are suitable when the loop body needs to be executed at least once, regardless of the condition.
*/

// Do While loop

#include<stdio.h>
 
 int main(){
   int a, i = 1;
   printf("Enter the number whose table you want to see: ");
   scanf("%d", &a);
    do {
       printf("%d x %d = %d\n",  a, i, a * i);
       i++;
    }while(i<=10);
   return 0;
 }

// For Loop
#include<stdio.h>
 
 int main(){
   int a, i;
    printf("Enter the number whose table you want to see: ");
    scanf("%d", &a);
     for(i = 1; i <= 10; i++)
    {
    printf("%d x %d = %d\n",  a, i, a * i);
   }
   return 0;
 }

// While loop
 #include<stdio.h>
 
 int main(){
   int a, i;
    printf("Enter the number whose table you want to see: ");
    scanf("%d", &a);
    i = 1;
     while(i < 11){
    printf("%d x %d = %d\n",  a, i, a * i);
    i++;
   }
   return 0;
 }