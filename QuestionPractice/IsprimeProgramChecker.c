#include <stdio.h>
#include <math.h>

int isprime(int num){
     if (num <= 1) {
            return 0;
     }
     for (int i = 2; i <= sqrt(num); i++)
     {
        if (num % i == 0)
        {
                return 0;
        }
     }
        return 1;
}

int main()
{
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("The Prime numbers from %d to %d:\n", start, end);
    for (int i = start; i <= end; i++)
    {
         if (isprime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}