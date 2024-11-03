/*
The constant is a value or variable that cannot be changed in the program.
There are two types t define constant in C Programming language:

1. Constant key word: Just write the key word const before a float or integer or any data type 
that you want to be constant, and someone or you by mistake  can not change the value of that variable.

2. #Define preprocessor: We can define the value of some variable at the starting, e.g: 
#define PI = 3.14, Now one cannot change it's value, and it will be fixed.
*/
#include <stdio.h>
#define  PI 3.14
 int main()
 {
    const float a = 10.5;
    // float a = 8.9; This will give an error, since the value a constant.
    // float PI = 4.9; This will give an error, since the value a constant.
    return 0;
 }