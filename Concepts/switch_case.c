// Basic Lottery Checker by using the Switch Case and IF else statement.

#include <stdio.h>
int main(){
    int user_input;
    printf("Enter your Lottery number: ");
    scanf("%d", &user_input);
 if (user_input > 100 || user_input  < 0) {
    printf("The Lottery number is invalid.");
 }
 else {
    switch (user_input){
    case 69:
        printf("You have won the lottery!");
        break;
    case 7:
        printf("You have won the lottery!");
        break;
    case 99:
        printf("You have won the lottery!");
        break;
    case 45:
        printf("You have won the lottery!");
        break;
    case 77:
        printf("You have won the lottery!");
        break;  
    default:
        printf("Sorry, You didn't won any lottery.");
        break;
    }}
    return 0;
    }
    














//     int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//    switch(a){
//    case 2:
//    printf("The number is 2.");
//    break;
//    case 3:
//    printf("The number is 3.");
//    break;
//    default:
// //    printf("The number is not 2 or 3.");