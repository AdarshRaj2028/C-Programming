// Process 1

// #include <stdio.h>

// int main(){
//     int n, fact, i,sum = 0, j;
//     printf("The value of n: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++){
//         fact = 1;
//         for (j = i; j > 0; j--){
//             fact *= j;
//         }
//          sum += fact;
//          printf("Factorial is: %d\n", fact);
// }
// printf("\nHere is the sum: %d", sum);
// return 0;
// }

//Process 2

// #include <stdio.h>

// int main(){
//     int n;
//     printf("The value of n: ");
//     scanf("%d", &n);
//     int sum = 0;  // Initialize sum to 0
// int i = 1;    // Initialize i to 1
// while (i <= n) {
//    int fact = 1;  // Declare and initialize fact within the loop
//     int j = i;
//     while (j > 0) {
//         fact *= j;
//         j--;
//     }
//     sum += fact;
//     printf("Factorial of %d is: %d\n", i, fact);
//     i++;
// }
//     printf("\nHere is the sum: %d", sum);
// return 0;
// }

// Process 3(Fastest)

//     #include <stdio.h>
//     int main(){
//     int n, fact = 1,sum=0;
//     printf("The value of n: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++){
//         fact *= i;
//         sum += fact;
//     }
//     printf("Here is your factorial: %d", fact);
//     printf (" \nTheir Sum: %d",sum);
//     return 0;
// }

// Process 4

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     int sum = 0;  
//     int i = 1;    
//     while (i <= n) {
//         int fact = 1;  
//         int j = 1;
//         while (j <= i) {
//             fact *= j;
//             j++;
//         }
//         sum += fact;
//         printf("Factorial of %d: %d\n", i, fact); // Print each factorial
//         i++;
//     }
//     printf("Here is your sum: %d\n", sum);
//     return 0;
// }

// Process 5 (2nd Fastest)

//     #include <stdio.h>
//     int main(){
//     int n, i = 1, fact = 1,sum=0;
//     printf("The value of n: ");
//     scanf("%d", &n);
//     while (i <= n){
//         fact *= i;
//         sum += fact;
//         i++;
//     }
//     printf("Here is your factorial: %d", fact);
//     printf (" \nTheir Sum: %d",sum);
//     return 0;
// }

