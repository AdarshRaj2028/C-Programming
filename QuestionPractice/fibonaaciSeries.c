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

#include <stdio.h>

int fibonacci_rec(int no){
    if(no == 1){
        return 0;
    }
    else if(no == 2){
        return 1;
    }
        else{
            return  fibonacci_rec(no - 1) + fibonacci_rec(no - 2);
        }
    }

int main(){
    int n;
    printf("Enter the nth number whose number you want to see Acc. to  Fibonacci Series: ");
    scanf("%d", &n);
    printf("%d",  fibonacci_rec(n));
    return 0;
}
