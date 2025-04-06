#include <stdio.h>
#include <stdlib.h>

void credit(double *x, double *y); // (*x = Amount credited, *y = Amount present in account)
void deposit(double *x, double *y); // (*x = Amount deposited, *y = Amount present in account)

int main()
{
    double amount, acc_balance;
    int user_choice;
    printf("\nEnter the amount to start with: ");
    scanf("%lf",&acc_balance);
    do
    {
    printf("\n==========WELCOME TO FRAUD BANK==========\n\nYou have currently %.2lfrs in your account.\n\nWhat Operation do you want to perform.\n1. Credit\n2. Deposit\n3. Exit\n\nEnter your choice: ", acc_balance);
    scanf("%d", &user_choice);
    if (user_choice == 1)
    {
        printf("Enter the amount you want to credit: ");
        scanf("%lf", &amount);
        credit(&amount, &acc_balance);
        printf("Your updated balance is: %.2lf\n", acc_balance);
    }
    else if (user_choice == 2){
        printf("Enter the amount you want to deposit: ");
        scanf("%lf", &amount);
        deposit(&amount, &acc_balance);
        printf("Your updated balance is: %.2lf\n", acc_balance);
    }
    else if(user_choice == 3){
        printf("Thank you for using the program.\n");
    }
else{
    printf("Enter the valid options.\n");
}
system("pause");
system("cls");
    }while(user_choice != 3);
    
    return 0;
}

void credit(double *x, double *y) 
{ 
    if (*y - *x < -100)
    {
        printf("WARNING!!! YOUR BALANCE IS LESS THAN THE FREE MONEY BANK ALLOWS(i.e 100rs), OPERATION TERMINATED\n");
    }
    else{
        *y -= *x;
    }
}

void deposit(double *x, double *y)
{
     *y += *x;
}
