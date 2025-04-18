/*
 Format Specifier(%d): It is a way to tell the compiler what type of data is in a variable during taking input,
displaying output to the user.

%: The percent sign is used to indicate the start of a format specifier.
d: The d character specifhat the value is a decimal(0-9) integer.eg:=1234

Use a space before %c in scanf to make it ignore any leftover spaces or newlines from previous input,
so it only reads the next actual character you type.
Only in case of %c. Not Needed in other format specifiers like %d or %s or %f etc...

The %lu format specifier is used for unsigned long integers, which is suitable for printing sizes in bytes.
Use %f or %lf for printing a double value

# Edit conversion code is a special kind of format specifier in scanf() that allows you 
to customize what characters to accept from the input stream.
Edit Conversion Code:" %[A-Za-z], %[^0-9], %[^\n] "	Tells scanf which characters to accept or reject.
 
Syntax of Edit Conversion Code
scanf(" %[characters]", str);

  []: Tells scanf to match a set of characters
  ^: Means "NOT these characters"
  Character ranges: Like A-Z, a-z, 0-9
  Leading space: " %[..." helps skip leftover \n.

Edit Conversion	    Meaning
%[A-Za-z]	          Accept only letters(means the scanf will read until there comes no digits.)
%[a-zA-Z ]	        Accept only letters + spaces
%[^0-9]	            Accept anything except digits
%[^\n]	            Accept everything until newline
%[^,]	              Accept everything until , (used in CSV parsing)

Escape Sequence:
\n = New Line 
\a = Alarm or Beep 
\b = Backspace
\t = Tab(Horizontal)
\\ = Backslash
\' = Single Quote
\" = Double Quote
*/

#include <stdio.h>

int main()
{
  printf("%lu", sizeof(int));
// sizeof() operator is used  to find the size of a variable or data type in bytes.
    char str[100];

printf("Enter a sentence: ");
scanf(" %[^\n]", str); // Takes input until Enter is pressed, AlsoDon’t confuse %[^\n] with %[^\n]s, The latter is invalid.
printf("You typed: %s\n", str);
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
*/
    return 0;
}