/*
-> We have char, int, float, and other data types but "Strings is not a data type in C"
-> We express strings using an array of characters terminated by a null character ('\0').
-> Strings in C is created by creating an array of characters.
-> We can create a character array in the following ways:
--> Char name[] = "harry"; , Here compiler will automatically interpret "" as \0(null character).
But the compiler will need an extra space in that array to store the null character(\0) which is limited in the character array str.
--> Char name[] = {'h', 'a', 'r', 'r', 'y', '\0'};

'fgets()' is the safer and more robust choice, and 'gets()' should be avoided entirely in modern C programming.
*/

#include <stdio.h>

void printstr(char str[]){
    int i = 0;
    while (str[i] != '\0'){
    printf("%c", str[i++]);
    }
}
int main()
{
    // char str[10] = {'A', 'D', 'A', 'R', 'S', 'H', '\0'} METHOD 1.1(By Function)
    // char str[] = "ADARSH"; // METHOD 1.2(By Function)
    char str1[65];
    printf("Using Function:\n");
    printstr(str1);
    gets(str1);
// In most cases, it is better to use char str[] = "ADARSH"; because it is simpler, cleaner, and less error-prone 
// Unlike char str[] = {'A', 'D', 'A', 'R', 'S', 'H', '\0'}.
    printf("Using gets(): %s\n", str1);
    puts(str1);
    printf("Using puts(): %s\n", str1);
    return 0;
}