// Multiplication of two decimals number.
#include <stdio.h>

int main()
{
    // float a, b;
    // printf("Enter number a: ");
    // scanf("%f", &a);
    // printf("Enter number b: ");
    // scanf("%f", &b);
    // float result = a * b;
    // printf("The multiplication of two decimals: %.4f\n", result);
    int x, i, y;
    printf("Enter the number whose table you want to see: ");
    scanf("%d", &x);
    for(i = 1; i <= 10; i++){ 
        y = x * i;
        printf("%d x %d = %d\n", x, i, y);
    }
 /* In C, when a variable is declared but not initialized, it contains a garbage value,
 which is a random value that was present in the memory location where the variable was allocated.*/
    return 0; 
}
