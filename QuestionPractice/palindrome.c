#include<stdio.h>

int main()
{
int sum = 0, dig_sum = 0, dig_sum1 = 0, c = 0, digisum = 0, q = 0;
int z, x, rem, y, user_input, userinput3, sumx;
printf("-> Enter your number: ");
scanf("%d", &x);
y = x;
while(x > 0) 
{    
rem = x % 10;
sum = sum * 10 + rem;
x = x/10;
dig_sum += rem;
}
printf("\n-> Enter the number of digits whose last digits sum you want to see(n): ");
scanf("%d", &user_input);
z = y; 
while(y > 0)
{
    rem =  y % 10;
    dig_sum1 += rem;
    y = y/10;
    c++;
    if(c == user_input)
    {
        printf("\n-> The sum of last %d digits of the sum is %d\n\n", user_input, dig_sum1);
            // break;
    }
}
sumx = sum;
printf("-> Enter the number of starting digits of sum you want to see(x): ");
scanf("%d", &userinput3);
while(sum>0){
    rem = sum % 10;
    // sum2 = sum2 * 10 + rem2;
    digisum += rem;
    sum = sum/10;
    q++;
    if ( q == userinput3){
printf("\n-> The sum of starting %d digits of the sum is %d\n\n", userinput3, digisum);
    }
}
if(sumx == z){
printf("-> The number is palindrome in nature.\n\n");
}
else{
printf("-> The number is not palindrome in nature.\n\n");
}
printf("-> The reverse of the number: %d\n\n", sumx);
printf("-> The sum of digit of the number: %d\n\n", dig_sum);
 return 0;
}