#include <stdio.h>

void func1(int arg[]){
   printf("Before reversal: ");
   for (int i = 0; i < 7; i++)
   {
    printf("%d ", arg[i]);
   }
   printf("\nAfter reversal: ");
   for (int j = 6; j >= 0 ; j--)
   {
    printf("%d ", arg[j]);
   }
}

int main()
{
    int str[10] = {1,2,3,4,5,6,7};
    func1(str);
    return 0;
}