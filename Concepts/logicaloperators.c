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
}
