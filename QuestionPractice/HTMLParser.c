/*
size_t is an unsigned integer type used to represent sizes in memory.
It is commonly used by functions like strlen() to avoid issues with negative numbers.
Strings can be large. Using an unsigned type ensures you can handle large values without risking negative results.
Size of size_t, On a 64-bit system: It is typically 8 bytes (64 bits).
-> To display the value of size_t, you need the correct format specifier:
-> Use %zu for size_t. This ensures compatibility across platforms.

--> In C, when you pass an array to a function, it is passed as a pointer to the first element of the array.
This means that the array itself is not copied, but rather the address of its first element is passed to the function. So, whether you pass an array or a pointer,
they are essentially the same thing in C — they both represent memory addresses pointing to the location of the array elements.
*/

#include <stdio.h>
#include <string.h>

void parser(char *str){
   int in = 0; // For checking if we are inside the tag or not.
   int index = 0;
   for (int i = 0; i < strlen(str); i++)
   {
       if (str[i] == '<')
       {
        in = 1;
        continue;
       }
       else if(str[i] == '>'){
        in = 0; 
        continue;
       }
// Removing tag and shifting the character in place of the tag.
       if (in == 0)
       {
        str[index] = str[i];
        index++;
       }
       
   }
   str[index] = '\0';

// Removing trailing spaces from starting by shifting the text in place of trailing.
 while(str[0] == ' ')
 {
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i+1];
    }
 }

// Removing trailing spaces from the end by making space as a null character.
 while(str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }
}

int main()
{
    char string[] = "<h1>   Here is the text that you wanna read.   </h1>";
    parser(string);
    printf("~~%s~~", string);
    return 0;
}