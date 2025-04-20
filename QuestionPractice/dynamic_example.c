/*
In Method 2:

ids[n] is used to preserve the data of the 3 employee, even after freeing the memory block.
Each ids[i] points to different memory block, so data doesn’t get overwritten
ids[0] is not storing the data itself.
ids[0] is storing the address of a memory block where the full string is stored.
*/

// Method 1, In this approach, the data is preserved in that iteration, but once free() is called, that data is no longer accessible.
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int size;
//     char *id;// Single pointer
//     for (int i = 1; i <= 3; i++)
//     {
//         printf("\n\nEnter the size of Employee %d Id: ", i);
//         scanf("%d", &size);
//         id = (char *)malloc((size + 1) * sizeof(char));
//         printf("Enter your id: ");
//         scanf(" %[^\n]%*c", id);
//         printf("The Id of the employee is: %s", id);
//         free(id);
//     }
//     return 0;
// }

// Method 2, In this approach, all IDs are stored (preserved) in memory until the program finishes, and then all the memory is freed at once.
// Mix of Method 1 and 3.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size, n = 3;
    char *ids[n];// Pointer array
    for (int i = 1; i <= n; i++)
    {
        printf("\n\nEnter the size of Employee %d Id: ", i);
        scanf("%d", &size);
        ids[i] = (char *)malloc((size + 1) * sizeof(char));
        printf("Enter your id: ");
        scanf(" %[^\n]%*c", ids[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("The Id of the employee %d is: %s\n", i, ids[i]);
        free(ids[i]);
        ids[i] = NULL;  // Prevents accidental access
// This is called "nullifying a dangling pointer", which is a good habit in C.
    }
    
    return 0;
}

// Method 3, Not memory efficient.
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int size;
//     char *id1, *id2, *id3;
//     printf("\n\nEnter the size of Employee 1 Id: ");
//     scanf("%d", &size);
//     id1 = (char *)malloc((size + 1) * sizeof(char)); // (size + 1), + 1 for leaving an extra byte for null terminator.
//     printf("Enter your id: ");
//     scanf(" %[^\n]%*c", id1);
//     printf("The Id of the employee is: %s", id1);

//     printf("\n\nEnter the size of Employee 2 Id: ");
//     scanf("%d", &size);
//     id2 = (char *)malloc(size * sizeof(char));
//     printf("Enter your id: ");
//     scanf(" %[^\n]%*c", id2);
//     printf("The Id of the employee is: %s", id2);

//     printf("\n\nEnter the size of Employee 3 Id: ");
//     scanf("%d", &size);
//     id3 = (char *)malloc(size * sizeof(char));
//     printf("Enter your id: ");
//     scanf(" %[^\n]%*c", id3);
//     printf("The Id of the employee is: %s", id3);

//     free(id1);
//     free(id2);
//     free(id3);
//     return 0;
// }