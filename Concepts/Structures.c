/*
-> Structures are user defined data types in C.
-> It is used to create a complex data type which contains diverse information.
-> They are very similar to arrays but structure can store data of any type, 
which is more useful.

Defining a structure.

struct [structure_name]
{
data_type var 1  (These data types are called members)
data_type var 2
data_type var 3... etc.
}
[structure_variables];

-> Structure members are accessed using the dot operator.
-> (.) is called as "structure member operator".

This is how we can use Typedef:

typedef <previous_name> <alias_name>;
-> This is used to give an alias(New name) to a data type.
*/

#include <stdio.h>
#include <string.h>
typedef int integer;

typedef struct Student
{
    integer id;
    integer marks;
    char name[30];
}structure;
// structure s1, s2, s3;  (Global Variable)
int main()
{
    structure s1, s2, s3; // Local variable since inside the function.
    s1.id = 1001;
    s2.id = 1002;
    s3.id = 1003;
    s1.marks = 83;
    s2.marks = 95;
    s3.marks = 79;
    strcpy(s1.name, "Adarsh Raj");
    strcpy(s2.name, "Rohit Saha");
    strcpy(s3.name, "Deepak Verma");
    printf("The marks of %s is with id %d is %d\n", s1.name, s1.id, s1.marks);
    printf("The marks of %s is with id %d is %d\n", s2.name, s2.id, s2.marks);
    printf("The marks of %s is with id %d is %d\n", s3.name, s3.id, s3.marks);
    return 0;
}