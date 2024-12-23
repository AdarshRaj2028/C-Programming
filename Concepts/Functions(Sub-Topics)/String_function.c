/*
C Library: <string.h>

# strcat() -> This function is used to combine two given strings.
STRCAT function is designed to concatenate two strings at a time.

# strlen() -> This function is used to find the length of a given string.

// The null terminator itself is not counted in the length returned by Strlen(), but it marks the end of the string in memory.
// If string = "Hello", it returns 5.
// But the actual memory for the string contains 6 elements: 'H', 'e', 'l', 'l', 'o', and '\0' (null terminator).

# strrev() -> This function is used to show reverse of a string.

# strcpy() -> This function is used to copy one string to another.

# strcmp() -> This function is used to compare two given strings.

Use puts() when you want to print a string.
Use printf() when you want to print formatted output or non-string types like integers.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Adarsh";
    char str2[] = "Raj";
    char str3[20];
    // printf("The strcmp for s1, s2 returned %d\n", strcmp(str1, str2)); 
    // puts(strcat(str1,str2));
    printf("The length of str1 is: %d\n", strlen(str1));
    printf("The length of str2 is: %d\n", strlen(str2));
    printf("The Reversal of str1 is: \n"); 
    puts(strrev(str1));
    printf("The Reversal of str2 is: \n"); 
    puts(strrev(str2));
    strcpy(str3, strcat(str1,str2));
    puts(str3);
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[15];
//     char str2[15];
//     char str3[20] = "is a friend of";
//     printf("Enter the name of 1st Friend: ");
//     scanf("%s", str1);
//     printf("Enter the name of 2nd Friend: ");
//     scanf("%s", str2);
//     printf("%s is a friend of %s\n", str1, str2);
//     puts(strcat(str1,(strcat(str3,str2)))); 
//     return 0;
// }