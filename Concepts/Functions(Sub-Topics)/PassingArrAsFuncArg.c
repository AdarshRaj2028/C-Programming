/*
-> We pass arrays to a function when we need to pass a list of values to a given function.
-> We can pass the arrays to a function:
1. By declaring array as a parameter in the funtion
2. By declaring a pointer in the function to hold the base address of the array.
*/
// If we will pass array as function, then formal parameter will be copy of address of array instead of copy of values of array.

#include <stdio.h>

// Passing arrays as a parameter in the function. 
int func1( int array[]){
    for (int i = 0; i < 6; i++)
    {
    printf("The value at %d is %d\n", i, array[i]);
    }
    // array[0] = 382;
//*** INSIDE FUNCTION, If you change the value of the array, it will change in the main function as well.***//     
return 0;
}

// Passing pointer in the function to hold the base address of the array. 
void func2(int *ptr){
    for (int i = 0; i < 6; i++)
    {
    // printf("The value at %d is %d\n", i, ptr[i]);
    // OR
    printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 828;
}

void func3(int array[][3]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
         printf("The value at %d, %d is %d\n", i, j, array[i][j]);   
        }   
    }
}

int main()
{
    int arr[][3] = {{2,4,5,},{6,7,8}};
    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);
    // func2(*arr);
    // func2(arr);
    func3(arr);
    return 0;
}