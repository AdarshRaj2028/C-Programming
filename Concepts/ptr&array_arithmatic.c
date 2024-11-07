/*
Arithmatic in pointer works like when we add, Like ptr + 2,it will not add the digit 2 in the memory but will add the size of the data type specified by the user.
if there is int ptr + 2 means it will add 8 bytes to the memory.
But if we use ptr++ it will increment the value of the pointer by 1 unit of byte space specified by the user(If int then increment will increase by 4 bytes).

We can either increment or decrement the value of pointer.

arr[i] == *(arr + i)
If arr is a pointer to arr[0] then arr+ is a pointer to arr[i].
*/

#include <stdio.h>
int main()
{
    // int a = 34;
    // int *ptra = &a;
    // printf("%d\n", ptra);
    // // ptra++;
    // printf("%d\n", ptra);
    // printf("%d", ptra-2);
    int arr[] = {1,2,3,4,5,6,7,8};
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("The address of the first element of array is %d\n", &arr[0]);
    printf("The address of the first element of array is %d\n", arr);
    printf("The address of the second element of array is %d\n", &arr[1]);
    printf("The address of the second element of array is %d\n", arr + 1);
//arr++; This line will throw an error.

    printf("The value at the address of the first element of array is %d\n", *(&arr[0]));
    printf("The value at the address of the first element of array is %d\n", *(arr));
    printf("The value at the address of the second element of array is %d\n", *(&arr[1]));
    printf("The value at the address of the second element of array is %d\n", *(arr + 1));
    return 0;
}