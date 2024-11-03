#include <stdio.h>

int main()
{
    int a, b;
    a = 40;
    b = 0;
// && -> Logical AND Operator. If both the operants are non-zero, then the condition is true.
// || -> Logical OR operator. If any of these two operands is non-zero, then condition becomes true.
// ! -> Logical NOT operator. It is used to reverse the logical state of its opperand. If condition is true, 
// then logical NOT operator will make it false.
    printf("%d\n",  a && b); // 0 represents  false in C
    printf("%d\n",  a || b); // 1 represents true in C
    return 0;

    // Format Specifier(%d): It is a way to tell the compiler what type of data is in a variable
// during taking input, displaying output to the user.
// %: The percent sign is used to indicate the start of a format specifier.
// d: The d character specifhat the value is a decimal(0-9) integer.eg:=1234
// /*
// Use a space before %c in scanf to make it ignore any leftover spaces or newlines from previous input,
// so it only reads the next actual character you type.
// Only in case of %c. Not Needed in other format specifiers like %d or %s or %f etc...
// */

}
/*
Escape Sequence:
\n = New Line 
\a = Alarm or Beep 
\b = Backspace
\t = Tab(Horizontal)
\\ = Backslash
\' = Single Quote
\" = Double Quote
*/