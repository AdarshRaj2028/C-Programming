#include <stdio.h>

int main() {
int i, n, x, sum = 0, sum1;
printf("Enter the number: ");
scanf("%d", &x);
sum1 = x;
temp = 
while(x > 0){
    i = x % 10;
    if(sum1 < 999 && sum1 > 100){
    n = i*i*i;
    }
    else if( sum1 < 9999 && sum1 > 1000){
    n = i*i*i*i;
    }
     else if( sum1 < 99999 && sum1 > 10000){
    n = i*i*i*i*i;
     }
    else if( sum1 < 999999 && sum1 > 100000){
    n = i*i*i*i*i*i;
     }
    sum += n;
    x = x / 10; 
    }
printf("%d\n", sum);
if(sum == sum1){
    printf("Yes");
}
else{
    printf("No");
}  
    return 0;
}