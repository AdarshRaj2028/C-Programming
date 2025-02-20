#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Krishnamurthy number
float factorial(int c)
{
    float fact = 1;
    for (int i = 1; i <= c; i++)
    {
        fact *= i;
    }
    return fact;
}
void krishnamurthy(int a)
{
    int original = a, sum = 0, x = 0, rem;
    while (a > 0)
    {
        rem = a % 10;
        x += factorial(rem);
        a /= 10;
    }
    if (original == x)
    {
        printf("The number is a Krishnamurthy number or Strong number.\n");
    }
    else
    {
        printf("The number is not a Krishnamurthy number or Strong number.\n");
    }
}

// 2. Palindrome number
void palindrome(int b)
{
    int sum = 0, rem, sd;
    sd = b;
    while (b > 0)
    {
        rem = b % 10;
        sum = sum * 10 + rem;
        b = b / 10;
    }
    if (sum == sd)
    {
        printf("The number is palindrome in nature.\n");
    }
    else
    {
        printf("The number is not palindrome in nature.\n");
    }
}

// 3. Armstrong number
void armstrong(int c)
{
    int count = 0, x = c, rem, sum = 0, org;
    while (x > 0)
    {
        x = x / 10;
        count++;
    }

    org = c;

    while (c > 0)
    {
        rem = c % 10;
        int power = 1;
        for (int i = 1; i <= count; i++)
        {
            power *= rem;
        }
        sum += power;
        c /= 10;
    }

    if (sum == org)
    {
        printf("The number entered is an Armgstrong number.\n");
    }
    else
    {
        printf("The number entered is not an Armgstrong number.\n");
    }
}
int squredigit(int z)
{
    int sum = 0;
    while (z > 0)
    {
        int rem = z % 10;
        sum += rem * rem;
        z = z / 10;
    }
    return sum;
}
// 4. Happy Number
int check(int d)
{
    int x = d * d;
    return x;
}
int find(int n)
{
    while (n > 9)
    {
        n = squredigit(n);
    }
    return n;
}
int happy(int d)
{
    int n = d;
    if (d > 9)
    {
        n = find(d);
    }
    else
    {
        if (check(d) > 1)
        {

            n = find(d);
        }
        else if (check(d) > 1 && check(d) < 3)
        {
            check(d);
        }
        else
        {
            n = 1;
        }
    }
    if (n == 1)
    {
        printf("%d is a happy number.\n", d);
    }
    else
    {
        printf("%d is not a happy number.\n", d);
    }
}

// 5. Harshad number
void harshad(int e)
{
    int sum = 0, original, rem;
    original = e;
    while (e > 0)
    {
        rem = e % 10;
        e = e / 10;
        sum += rem;
    }
    if (original % sum == 0)
    {
        printf("The number is a Harshad or Niven number.\n");
    }
    else
    {
        printf("The number is not a Harshad or Niven number.\n");
    }
}

void spy(int f){
    int sum = 0, prod = 1, rem;
    while (f != 0)
    {
        rem = f % 10;
        sum += rem;
        prod *= rem;
        f = f / 10;
    }
    if(sum == prod){
        printf("The number is Spy number.\n");
    }
     else{
        printf("The number is not a Spy number.\n");
     }
}

int main()
{
    int a, b, c, d, e, f, userinput;
    while(1){
        system("cls");
    printf("1. Krishnamurthy number\n2. Palindrome number\n3. Armstrong number\n4. Happy number\n5. Harshad number\n6. Spy number\n0. Exit\n");
    printf("Enter the type of number you want to check for your input number: ");
    scanf("%d", &userinput);

    switch (userinput)
    {

    case 1:
        printf("\nEnter the number you want to check: ");
        scanf("%d", &a);
        krishnamurthy(a);
        break;

    case 2:
        printf("\nEnter the number you want to check: ");
        scanf("%d", &a);
        palindrome(a);
        break;

    case 3:
        printf("\nEnter the number you want to check: ");
        scanf("%d", &a);
        armstrong(a);
        break;

    case 4:
        printf("\nEnter the number you want to check: ");
        scanf("%d", &a);
        happy(a);
        break;

    case 5:
        printf("\nEnter the number you want to check: ");
        scanf("%d", &a);
        harshad(a);
        break;

    case 6:
        printf("\nEnter the number you want to check: ");
        scanf("%d", &a);
        spy(a);
        break;

    case 0:
       printf("Thank you for using the program.");
       exit(1);
    
    default:
        printf("Please enter from the available options.\n");
        break;
    }
    system("pause");
}
    return 0;
}