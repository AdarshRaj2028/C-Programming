#include <stdio.h>

int main()
{
    int a, b, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (gcd = (a < b ? a : b); gcd > 0; gcd--)
    {
        (a % gcd == 0 && b % gcd == 0) ? printf("GCD is: %d\n", gcd) : 0;
        if (a % gcd == 0 && b % gcd == 0)
        {
            break;
        }
    }
    return 0;
}