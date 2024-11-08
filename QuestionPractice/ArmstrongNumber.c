// #include <stdio.h>

// int main() {
// int i, n, x, sum = 0, sum1, temp, digit;
// printf("Enter the number: ");
// scanf("%d", &x);
// sum1 = x;
// temp = x;
// while (temp > 0){
//     temp--;
    
// }
// while(x > 0){
//     i = x % 10;
//     sum += n;
//     x = x / 10; 
//     }
// printf("%d\n", sum);
// if(sum == sum1){
//     printf("Yes");
// }
// else{
//     printf("No");
// }  
//     return 0;
// }




























// #include <stdio.h>
// #include <math.h>

// int main() {
//     int x, original, sum = 0, digit, count = 0;

//     printf("Enter the number: ");
//     scanf("%d", &x);

//     original = x;

//     // Count the number of digits
//     while (x > 0) {
//         x /= 10;
//         count++;
//     }

//     x = original; // Reset x to original value

//     // Calculate the sum of each digit raised to the power of count
//     while (x > 0) {
//         digit = x % 10;
//         sum += (int)pow(digit, count);
//         x /= 10;
//     }

//     printf("Sum of digits raised to the power of number of digits: %d\n", sum);

//     // Check if the sum is equal to the original number
//     if (sum == original) {
//         printf("Yes\n");
//     } else {
//         printf("No\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int x, original, sum = 0, digit, count = 0;

    printf("Enter the number: ");
    scanf("%d", &x);

    original = x;

    // Count the number of digits
    while (x > 0) {
        x /= 10;
        count++;
    }

    x = original; // Reset x to original value

    // Calculate the sum of each digit raised to the power of count
    while (x > 0) {
        digit = x % 10;
        int power = 1; // Initialize power to 1
        for (int i = 0; i < count; i++) {
            power *= digit; // Calculate digit^count
        }
        sum += power; // Add to sum
        x /= 10;
    }

    printf("Sum of digits raised to the power of number of digits: %d\n", sum);

    // Check if the sum is equal to the original number
    if (sum == original) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}