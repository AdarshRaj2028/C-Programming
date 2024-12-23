/*
--> LOCAL VARIABLE

-> Scope is a region of the program where a variable is defined or can exist and is accessible.
-> Variable which are accessed only within the block of code/ function where they are declared.
-> They are inaccessible outside the block of code where they are declared.

--> GLOBAL VARIABLE

-> Variable which are accessible throughout the entire program from any function.
-> They are accessible from any part of the program.
-> If a local variable and a global variable has the same name, the local variable will take preference.  

--> STATIC VARIABLE

-> Variable which are declared with the static keyword.
-> They have a property of preserving their values even when they go out of the scope.
-> They are initialized only once when the program starts.
-> They remains in the memory until the program ends.
-> They are initialized to 0 if not initialized explicitly.
*/
     
#include <stdio.h>

int func1(int a){
    // static int myvar = 10; // Here static variables remembers ts previous values
    int myvar = 10; // But simple variable resets the value again to the one initalized earlier
    printf("The value %d\n", myvar);
    myvar++;
    // printf("The address of the variable a is %d\n", &a);
    return a + myvar;
}

int main()
{
    int a = 0;
    int var = func1(a);
    var = func1(a);
    var = func1(a);
    var = func1(a);
    // int *ptr = &var;
    // printf("The address of the variable a is %d\n", &a);
    // printf("The value %d\n", var);
    return 0;
}
/*
IMPORTANT THING TO KNOW:

When you pass a to func1, it is passed by value. This means that the function func1 gets a copy of a rather than the actual variable a from main(). Therefore, any changes to a inside func1 will not affect a in main(). Similarly, the address printed inside func1 is the address of the local variable a within func1, not the original a in main().
*/