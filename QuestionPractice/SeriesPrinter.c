#include <stdio.h>

// Funtion 1
int sum1(int a){
int sum = 0;
for(int i = 1; i <= a; i++){ 
sum += i;
}
return sum;
}

// Function 2
int sum2(int b){
int sum = 0;
for(int i = 1; i <= (2*b) - 1; i = i + 2){ 
sum += i;
// i++;
}
return sum;
}

// Function 3
int sum3(int c){
int sum = 0;
int fact = 1;
for(int i = 1; i <= c; i++){ 
fact *= i;
sum += fact;
}
return sum;
}

// Function 4(Easy)
int sum4(int d){
int sum = 0;
int fact = 1;
for(int i = 1; i <= d; i++){ 
fact *= i;
if (i % 2 == 0){
   sum -= fact;
}
else{
    sum += fact;
}}
return sum;
}


int main(){
    int z, a, b, c, d, e, f, g, h;
    printf("1. 1 + 2 + 3 + 4... upto n terms\n2. 1 + 3 + 5 + 7... upto n terms\n3. 1! + 2! + 3! + 4!... upto n terms\n4. 1! - 2! + 3! - 4!... upto n terms\n5. 1 + 1/2! + 2/3! + 3/4!... upto n terms\n6. 1^1 + 2^2 + 3^3 + 4^4... upto n terms\n7. (1! + 2!)/1 + (3! + 4!)/2 + (5! + 6!)/3... upto n terms\n8. (1! + 2! + 3! + 4!...+ n!)/n!... upto n terms\n");
    printf("\nEnter the number whose series you want to see: ");
    scanf("%d",  &z);
    switch(z){
            case 1: 
            printf("\nEnter the nth term, to see the result upto there from the series you have chosen: ");
            scanf("%d", &a);
            printf("The Sum Upto %d terms: %d", a, sum1(a));
            break;

            case 2:
            printf("\nEnter the nth term, to see the result upto there from the series you have chosen: ");
            scanf("%d", &b);
            printf("The Sum Upto %d terms: %d", b, sum2(b));
            break;

            case 3:
            printf("\nEnter the nth term, to see the result upto there from the series you have chosen: ");
            scanf("%d", &c);
            printf("The Sum Upto %d terms: %d", c, sum3(c));
            break;

            case 4:
            printf("\nEnter the nth term, to see the result upto there from the series you have chosen: ");
            scanf("%d", &d);
            printf("The Sum Upto %d terms: %d", d, sum4(d));
            break;

            case 5:
            break;

            case 6:
            break;

            case 7:
            break;

            case 8:
            break;

}
return 0;
}