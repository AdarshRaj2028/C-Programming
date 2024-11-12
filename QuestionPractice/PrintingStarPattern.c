#include <stdio.h>

void func1(int z){
    for (int i = 0; i < z; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        } 
}

void func2(int z){
    for (int i = 0; i < z; i++)
        {
            for (int j = i; j < z; j++)
            {
                printf("*");
            }
            printf("\n");
        }
}

void func3(int z){
              for (int i = 0; i < z; i++) {
  
        for (int j = 0; j < z - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int user_input, input;
    printf("Enter 1 to see Traingular star pattern\n");
    printf("Enter 2 to see Reversed Traingular star pattern\n");
    printf("Enter 3 to see Pyramid pattern\n");
    printf("Enter your decision: ");
    scanf("%d", &user_input);
    switch (user_input)
    {
    case 1:
        printf("Enter the number of rows: ");
        scanf("%d", &input);
        func1(input);
        break;
        
    case 2:
        printf("Enter the number of rows: ");
        scanf("%d", &input);
     func2(input);
    break;
    
    case 3:
        printf("Enter the number of rows: ");
        scanf("%d", &input);
     func3(input);
    break;
    
    default:
    printf("Please enter input as 1 or 2 or 3.");
        break;
    }
    return 0;
}