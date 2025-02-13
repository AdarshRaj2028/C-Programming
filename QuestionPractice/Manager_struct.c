#include <stdio.h>
struct Manager{
        char licenseNo[20];
        char name[20];
        long  salary;
        int km;
              };

    int main(){
    int n;
    printf("Enter the number of driver's information that will be entered: ");
    scanf("%d", &n);
    struct Manager dri[n];
    for (int i = 0; i < n; i++)
    {
    printf("\nEnter details of Driver %d\n\n", i+1);
     printf("Enter the Driver's License No: ");
     fflush(stdin);
     scanf("%[^\n]s", &dri[i].licenseNo);
     printf("Enter the Driver's Name: ");
     fflush(stdin);
     scanf("%[^\n]s", &dri[i].name); 
     printf("Enter your salary: ");
     scanf("%ld", &dri[i].salary); 
     printf("Enter KM driven by you: ");
     scanf("%d", &dri[i].km);  
    }
    printf("\nSerial No.\t\tDriver No.\t\tDriver's Name\t\tDrivers Salary\t\tKM Driven by the driver\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d\t\t\t%s\t\t%s\t\t\t%ld\t\t\t%d",i + 1,dri[i].licenseNo,dri[i].name,dri[i].salary,dri[i].km );
    }
    return 0;
}