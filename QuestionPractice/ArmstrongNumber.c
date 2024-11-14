#include <stdio.h>

int main() {
    int x, original, sum = 0, digit, count = 0;

    printf("Enter the number: ");
    scanf("%d", &x);

    original = x;

    while (x > 0) {
        x /= 10;
        count++;
    }

    x = original; 

    while (x > 0) {
        digit = x % 10;
        int power = 1; 
        for (int i = 0; i < count; i++) {
            power *= digit;
        }
        sum += power; 
        x /= 10;
    }

    printf("Sum of digits raised to the power of number of digits: %d\n", sum);

    if (sum == original) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}