#include <stdio.h>

void func1(int z)
{
    for (int i = 0; i < z; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void func2(int z)
{
    for (int i = 0; i < z; i++)
    {
        for (int j = i; j < z; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void func3(int z)
{
    for (int i = 0; i < z; i++)
    {

        for (int j = 0; j < z - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void func4(int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}


void func5(int z)
{
    for (int i = 1; i <= z; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == z)
            {
                    printf("* ");
            } 
            else {
                printf("  ");
            }
    }
    printf("\n");
    }
}

void func6(int z){
    for (int i = 1; i <= z; i++) {
        for (int j = i; j <= z; j++) {
            if (j == z || j == i || i == 1) {
                printf("* ");
            } 
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int user_input, input, input2;
    printf("Enter 1 to see Traingular star pattern\n");
    printf("Enter 2 to see Reversed Traingular star pattern\n");
    printf("Enter 3 to see Pyramid pattern\n");
    printf("Enter 4 to see Rectangle\\Square\n");
    printf("Enter 5 to see Hollow Traingular star pattern\n");
    printf("Enter 6 to see Hollow Reversed Traingular star pattern\n");
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

    case 4:
        printf("Enter the number of rows: ");
        scanf("%d", &input);
        printf("Enter the number of columns: ");
        scanf("%d", &input2);
        func4(input, input2);
        break;

    case 5:
        printf("Enter the number of rows: ");
        scanf("%d", &input);
        func5(input);
        break;

    case 6:
        printf("Enter the number of rows: ");
        scanf("%d", &input);
        func6(input);
        break;
    
    default:
        printf("Please enter input available.");
        break;
    }
    return 0;
}