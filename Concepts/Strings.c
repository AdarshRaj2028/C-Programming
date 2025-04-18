/*
-> We have char, int, float, and other data types but "Strings is not a data type in C"
-> We express strings using an array of characters terminated by a null character ('\0').
-> Strings in C is created by creating an array of characters.
-> We can create a character array in the following ways:
--> Char name[] = "harry"; , Here compiler will automatically interpret "" as \0(null character).
But the compiler will need an extra space in that array to store the null character(\0) which is limited in the character array str.
--> Char name[] = {'h', 'a', 'r', 'r', 'y', '\0'};

Some functions in C:

- strlen(str) – Length of string (excluding \0)
- strcpy(dest, src) – Copy string
- strcmp(s1, s2) – Compare strings
- strcat(s1, s2) – Concatenate
- strchr(str, 'a') – Find character
- strstr(str, "abc") – Find substring

Buffer is like a waiting area for leftover characters, and if fgets is called right after scanf, it picks up the leftover like \n and returns a blank string.
The input buffer in C temporarily holds user input; if not managed properly, leftover characters like newline can affect subsequent inputs, especially when mixing scanf and fgets.

a) getchar(); — Most Reliable
    Use: To consume one leftover character from buffer (usually \n)
    Best when? → After scanf() and before fgets(), (maybe loop it to consume all \n)

b) fflush(stdin); — Undefined Behavior (in C standard)
    It might work in some compilers (like Turbo C or MSVC), but it's not portable or safe.
    Never recommended in standard C programming.
        
c) fflush() is completely valid and standard for output streams like stdout.
   fflush(stdout); → Flushing output buffer = allowed, portable, clean.
   To force print printf() output immediately -> fflush(stdout);

'fgets()' is the safer and more robust choice, and 'gets()' should be avoided entirely in modern C programming.
*/

#include <stdio.h>
#include <string.h>

// ✅ Custom function to print a string character by character
void printstr(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        printf("%c", str[i++]);
    }
}

int main() {
    // METHOD 1.1: Character array manually initialized with '\0'
    char str1[10] = {'A', 'D', 'A', 'R', 'S', 'H', '\0'};

    // METHOD 1.2: Simpler and cleaner
    char str2[] = "ADARSH";

    // METHOD 1.3: Using fgets()
    char str3[65];
    
    // METHOD 1.4: Using scanf with edit conversion
    char str4[100];

    printf("Using printstr function on str1:\n");
    printstr(str1);
    printf("\n");

    printf("Using string literal (str2):\n");
    puts(str2);

    // Using fgets
    printf("Enter a string (using fgets): ");
    fgets(str3, sizeof(str3), stdin);
    str4[strcspn(str4, "\n")] = '\0';
    /*
    strcspn(str, "\n"):
    Finds the position (index) of the first occurrence of \n in the string str.
    If \n is not found, it returns the length of the string.

    str[...] = '\0';:
    Replaces the \n character with a null terminator \0.
    This effectively removes the newline from the string.
    */
    printf("You entered (fgets): ");
    puts(str3);
    
    // Using scanf edit conversion (reads until newline, includes spaces)
    printf("Enter another string (using scanf edit conversion): ");
    scanf(" %[^\n]%*c", str4);  // space before %[^\n] to skip leftover newline
    printf("You entered (scanf edit conversion): ");
    puts(str4);
  /*

# Correct Edit Conversion Syntax

"To remove the newline from input buffer after scanf, you can either use getchar() or a better approach is %*c with scanf itself.
 It's clean, concise, and avoids common input issues when switching to fgets() or gets()."

scanf(" %[^\n]%*c", str);

    %[^\n] → Means: "Read everything until newline (\n) is encountered". So spaces are allowed.
    %*c → "Discard the leftover newline character", jo Enter dabane pe input buffer mein aata hai.
    Leading space in " %[^\n]..." → Ensures it skips any leftover white space from previous input.
    This works perfectly to take full-line input with spaces.

# Why %[^\n]s is Wrong?

There’s no format specifier like %[^\n]s — because:

    %[^\n] itself is a complete format specifier.
    Adding s after it makes no sense → s is not a valid suffix for bracket expressions.
    You'll get a compiler warning or unexpected behavior.

🧹 getchar()                - Use to remove 1 leftover character (\n)
🔁 while(getchar()!='\n');  - Full buffer flush when unsure of leftover junk
✨ %*c                      - Use in scanf("%d%*c", &n); to ignore \n directly after scanf()
🔍 strcspn()                - str[strcspn(str, "\n")] = '\0'; removes \n after fgets()
💪 Combo                    - scanf("%[^\n]%*c", str); to read full line and ignore newline in one go!

*/
    return 0;
}
