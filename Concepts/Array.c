/*
An Array is a Fixed size sequenced collection of elements of the same type.

-> Items are stored at contiguous memory locations.
-> A one-dimensional array  is like a list.
-> A two-dimensional array is like a table.
-> A three-dimensional array is like a cube.

Some texts refer to one-dimensional arrays as vectors.
Two-dimensional arrays as matrices.
Use the general term Array when th number of dimensions is unspecified or unimportant.
It is used to represent multiple data items of same data type by using only single name.
Each element of an array is of same size.

Syntax for Declaring and Initializing an Array
Data_type name[Size];
Data_type name[size] = {value1, value2, value3, ...};
data _type name[rows][columns]; For 2D Arrays.

Disadvantages of using an array:

-> Poor time complexity of insertion and deletion operation.
-> Wastage of memory since arrays are fixed in size.
-> No dynamic memory allocation.
->It is not possible to increase the size of the array, once you have declared the array.
*/

#include <stdio.h>

int main(){
// Method 1

// int marks[10];
// for(int i = 0; i < 10; i++){
// printf("Enter the marks of Roll no. %d : ", i + 1);
// scanf("%d", &marks[i]);
// }
// for(int i = 0; i < 10; i++){
// printf("The number of roll no. %d = %d\n", i + 1, marks[i]);
// }

// Method 2

int marks[]={30,23,34,45,56,3,21,43,45,35};

for(int i = 0; i < 10; i++){
printf("The number of roll no. %d = %d\n", i + 1, marks[i]);
}
return 0;
}