#include <stdio.h>

// METHOD 1

// void func1(int *arg){
//    printf("Before reversal: ");
//    for (int i = 0; i < 7; i++)
//    {
//     printf("%d ", arg[i]);
//    }
//    printf("\nAfter reversal: ");
//    for (int j = 6; j >= 0 ; j--)
//    {
//     printf("%d ", arg[j]);
//    }
// }

// int main()
// {
//     int str[10], i = 0;
//     printf("Enter the number 7 number whose reversal you want to see: ");
//     for(int i = 0; i < 7; i++){
//     scanf("%d, ", &str[i]);
//     // Character Array itself is a type of pointer due to we don't have to use & operator.
//     }
//     func1(str);
//     return 0;
// }

// METHOD 2

void arrRev(int arr[]){
   int temp;
   for (int i = 0; i < 8/2; i++)
   {
    temp = arr[i];
    arr[i] = arr[7-i];
    arr[7-i] = temp;
   }
}
void arrPrint(int arr[]){
     for (int i = 0; i < 8; i++)
    {
        printf("The value of element %d is %d\n", i + 1, arr[i]);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
   printf("Before reversing the array\n");
   arrPrint(arr);
   arrRev(arr);
   printf("\nAfter reversing the array\n");
   arrPrint(arr);
   arrRev(arr);
    return 0;
}