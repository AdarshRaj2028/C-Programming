#include <stdio.h>
#include <math.h>

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
for(int i = 1; i <=((2*b)-1); i = i + 2){ 
        sum += i;
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
fact *= i;// fact = 1, 2, 6, 24, 120
if (i % 2 == 0){
   sum -= fact;// sum = sum - fact;
}
else{
    sum += fact;
}}
return sum;
}

// Function 5
float sum5(int e){
    float sum = 1.0; 
    for(int i = 1; i < e; i++){
        int fact = 1;
        for(int j = 1; j <= i; j++){
        fact *= j;
        }
        sum +=(float) i / (fact*(i+1));
    }
    return sum;
}

// Function 6
double sum6(int f){
    double s, sum = 0;
 for(int i = 1; i <= f; i++)
 {
    s = pow(i, i);
    sum += s;
 }
 return sum;
}

// Function 7
float factorial(int c){
    float fact = 1;
    for (int i = 1; i <= c; i++)
    {
       fact *= i;
    }
    return fact;
}
float sum7(int g){
      float sum1 = 0, sum = 0;
    for (int i = 1; i <= g; i++)
    {
        sum1 += (factorial((2*i) - 1) + factorial(2*i))/i;
        // sum += sum1;
    }
    return sum1;
}

// Function 8
float sum8(int h){
      int fact = 1;
      float sum1 = 0, sum = 0;
      for (int i = 1; i <= h; i++)
      {
       fact *= i;
       sum1 += fact;
      }
      sum = sum1 / factorial(h);
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
            printf("\nEnter the nth term, to see the result upto there from the series you have chosen: ");
            scanf("%d", &e);
            printf("The Sum Upto %d terms: %.2f", e, sum5(e)); 
            break;

            case 6:
            printf("\nEnter the nth term, to see the result upto there from the series you have chosen: ");
            scanf("%d", &f);
            printf("The Sum Upto %d terms: %.2lf", f, sum6(f)); 
            break;

            case 7:
            printf("\nEnter the nth term, to see the result upto there from the series you have chosen: ");
            scanf("%d", &g);
            printf("The Sum Upto %d terms: %.2f", g, sum7(g));
            break;

            case 8:
            printf("\nEnter the nth term, to see the result upto there from the series you have chosen: ");
            scanf("%d", &h);
            printf("The Sum Upto %d terms: %.4f", h, sum8(h));
            break;

            default: 
            printf("Please enter the choices available.");
            break;
}
return 0;
}