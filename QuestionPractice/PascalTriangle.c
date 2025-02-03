#include <stdio.h>

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
       fact *= i;
    }
    return fact;
}

int main()
{
    int n = 0, r, ncr, x;
    printf("Enter the number of rows: ");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        
        for (int j = 0,r = 0; j <= i, r <= n; j++, r++)
        {
            ncr = factorial(n) / (factorial(r) * factorial(n - r));
            printf("%d ", ncr);
        }
       printf("\n");
       n++;
    }
    return 0;
}
