#include <stdio.h>

int main()
{
  printf("%lu", sizeof(int));
// sizeof() operator is used  to find the size of a variable or data type in bytes.
// The %lu format specifier is used for unsigned long integers, which is suitable for printing sizes in bytes.
// Use %f or %lf for printing a double value
  return 0;
}
// It gives answer in byte, just put the data type and it will tell you its size in bytes, According to your system architecture.