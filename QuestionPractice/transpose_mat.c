#include <stdio.h>
int main()
{
    int rows, columns;
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    printf("Enter number of columns : ");
    scanf("%d", &columns);
    int matrix[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the elements: ");
            scanf("%d", &matrix[i][j]);
        }
    }
    // FOR DISPLAYING THE MATRIX
    printf("\nThe required matrix is:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    // TO FIND THE TRANSPOSE OF MATRIX
    printf("\nThe transpose of matrix is:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }

    // FOR REVERSING THE MATRIX
    printf("\nThe reverse of matrix is:\n");
    for (int i = rows - 1; i >= 0; i--) // FOR INTERCHANGING ROWS 
    {
        for (int j = columns - 1; j >= 0; j--) // FOR INTERCHANGING COLUMNS
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}