#include <stdio.h>
#include <stdlib.h>

int max_of_four(int a, int b, int c, int d){
if (a > b && a > c && a > d){
return a;}
else if (b > c && b > d){
return b;}
else if (c > d){
return c;}
else {
return d;}
}

int main(){
int a, b, c, d, choice;
do{
printf("Enter your 1st number: ");
scanf("%d", &a);
printf("Enter your 2st number: ");
scanf("%d", &b);
printf("Enter your 3st number: ");
scanf("%d", &c);
printf("Enter your 4st number: ");
scanf("%d", &d);
int ans = max_of_four(a, b, c, d);
printf("\n-> The Largest number among given values are: %d", ans);
while(69){
printf("\nDo you want to run the program again?\n\n-> Enter '1' for Yes\n-> Enter '0' for No\n--> Enter your decision: ");
scanf("%d", &choice);
if ( choice == 1){
   system("cls");
   break;
}
else if( choice == 0){
    printf("Thank you for using the program.\n");
    return 0;
}
else{
    printf("\nInvalid choice. Please enter either '1' or '0'.\n");
}
}
} while(1);
// return 0;
}