#include <stdio.h>
int main()
{
    int user_input, input;
    printf("Enter 1 to see Traingular star pattern\n");
    printf("Enter 2 to see Reversed Traingular star pattern\n");
    printf("Enter your decision: ");
    scanf("%d", &user_input);
    switch (user_input)
    {
    case 1:
        printf("Enter the number of rows: ");
        scanf("%d", &input);
         for (int i = 0; i < input; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        } 
        break;
    case 2:
        printf("Enter the number of rows: ");
        scanf("%d", &input);
        for (int i = 0; i < input; i++)
        {
            for (int j = i; j < input; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    break;
    
    default:
    printf("Please enter input as 1 or 2.");
        break;
    }
    return 0;
}